library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use STD.textio.all;
use ieee.std_logic_textio.all;

entity FILE_INPUT_VHDL is
	port(
	TRG : in std_logic := '0';
	RDY_IN : in std_logic := '0';
	ID : out integer;
	BYTE_TEXT : out character := ' ' ;
	SET_TEXT_START : out character := ' ' ;
	SET_TEXT_END : out character := ' ' ;
	OPTION : out boolean ;
	RBYTE_TEXT : out character := ' ' ;
	OBYTE_TEXT : out character := ' ' ;
	RDY_ONE : out std_logic);
end FILE_INPUT_VHDL;

architecture behave of FILE_INPUT_VHDL is

  file file_in : text;
  signal trg_sig : std_logic ;
  constant c_WIDTH : natural := 15;
  signal text : string(c_WIDTH downto 1) := (others => ' ');
  signal id_sig : integer := 0 ;
  
  signal test : integer := 0;
  
begin

	trg_sig <= TRG or RDY_IN;

  process 
    variable v_ILINE     : line;
    variable v_OLINE     : line;
	 variable text_line : string(c_WIDTH downto 1) ;
	 variable id_reg : integer := 0 ;
    
  begin 

    file_open(file_in, "input_vectors.txt",  read_mode);
	 
    while not endfile(file_in) loop
		wait until (trg_sig = '1') ;
      readline(file_in, v_ILINE);
      read(v_ILINE, text_line);

      text <= text_line;

		case text_line(12)&text_line(11)&text_line(10)&text_line(9) is
			when "BYTE" => id_reg := 0 ; 
								BYTE_TEXT <= text_line(6);
			when "ANY " => id_reg := 1 ;
			when "RET " => id_reg := 2 ;
			when "SET " => id_reg := 3 ;
								SET_TEXT_START <= text_line(7);
								if(text_line(6) = '-') then
									OPTION <= false;
									SET_TEXT_END <= text_line(5);
								else
									OPTION <= true;
									SET_TEXT_END <= text_line(6);
								end if;
			when "RBYT" => id_reg := 4 ;
								RBYTE_TEXT <= text_line(5);
			when "OBYT" => id_reg := 5 ;
								OBYTE_TEXT <= text_line(5);
			when others => id_reg := 6 ;
		end case;

		ID <= id_reg;
    end loop;

    file_close(file_in);   
    wait;
  end process;

end behave;