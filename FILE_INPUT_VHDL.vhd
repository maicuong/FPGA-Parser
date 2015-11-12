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
	NBYTE_TEXT : out character := ' ' );
end FILE_INPUT_VHDL;

architecture behave of FILE_INPUT_VHDL is

  file in_file : text;
  signal trg_sig : std_logic ;
  signal id_sig : integer := 0 ;

  type command_row is array(1 to 3) of natural;
  type command_cell is array(1 to 45) of command_row;
  signal command_array : command_cell := (others => (others => 0));
  
  	   type string_array is array(1 to 45) of string(1 to 25);
	 signal res_string_array : string_array := (others => (others => ' '));
  
  signal test : character := ' ';
  
  --convert character to integer
  function character_to_integer(char:character) return integer is
		variable int : integer;
		begin
			case char is
				when '1' => int := 1;
				when '2' => int := 2;
				when '3' => int := 3;
				when '4' => int := 4;
				when '5' => int := 5;
				when '6' => int := 6;
				when '7' => int := 7;
				when '8' => int := 8;
				when '9' => int := 9;
				when others => int := 0;
			end case;
			return int;
	end character_to_integer;
	
	--convert string to integer
	function string_to_integer(str:string(1 to 2)) return integer is
		variable int : integer;
		variable int_1, int_10 : integer;
		begin
			int_10 := character_to_integer(str(1));
			int_1 := character_to_integer(str(2));
			int := 10*int_10 + int_1 ;
			return int;
	end string_to_integer;
	
begin

	trg_sig <= TRG or RDY_IN;

  process 
	 variable id_reg : integer := 0 ;
	 variable l:         line;
    variable c:         character;
    variable is_string: boolean;
	 variable j,n:         natural := 1;
	 variable str : string(1 to 25) := (others => ' ');
	 variable command : command_cell := (others => (others => 0));
    
  begin 

	 wait until trg = '1' ;
	 file_open(in_file, "math_input.txt",  read_mode);
		
		
	 while not endfile(in_file) loop
		--wait until trg_sig = '1';
		readline(in_file, l);
		-- clear the contents of the result string
		for i in res_string_array'range loop
			if(i>=1 and i <= 25) then
		  str(i) := ' ';
		  end if;
        res_string_array(j)(i) <= ' ';
		end loop;   
		-- read all characters of the line, up to the length  
		-- of the results string
		for i in res_string_array'range loop
			read(l, c, is_string);
			if is_string then 
				str(i) := c;
				res_string_array(j)(i) <= c;
			else exit;
			end if;
		end loop;
	 	
		if(str(2) = 'L') then
			case str(5)&str(6)&str(7)&str(8) is
				when "Byte" => command_array(j)(2) <= 1;
				when HT&"Byt" => command_array(j)(2) <= 1;
				when "Any " => command_array(j)(2) <= 2;
				when HT&"Any" => command_array(j)(2) <= 2;
				when "Set " => command_array(j)(2) <= 3;
				when HT&"Set" => command_array(j)(2) <= 3;
				when "RByt" => command_array(j)(2) <= 4;
				when HT&"RBy" => command_array(j)(2) <= 4;
				when "OByt" => command_array(j)(2) <= 5;
				when HT&"OBy" => command_array(j)(2) <= 5;
				when "Pos " => command_array(j)(2) <= 6;
				when HT&"Pos" => command_array(j)(2) <= 6;
				when "Back" => command_array(j)(2) <= 7;
				when HT&"Bac" => command_array(j)(2) <= 7;
				when "NByt" => command_array(j)(2) <= 8;
				when HT&"NBy" => command_array(j)(2) <= 8;
				when "Call" => command_array(j)(2) <= 9;
				when HT&"Cal" => command_array(j)(2) <= 9;
				when "Alt " => command_array(j)(2) <= 10;
				when HT&"Alt" => command_array(j)(2) <= 10;
				when "Skip" => command_array(j)(2) <= 11;
				when HT&"Ski" => command_array(j)(2) <= 11;
				when "Firs" => command_array(j)(2) <= 12;
				when HT&"Fir" => command_array(j)(2) <= 12;
				when "Fail" => command_array(j)(2) <= 13;
				when HT&"Fai" => command_array(j)(2) <= 13;
				when "RSet" => command_array(j)(2) <= 14;
				when HT&"RSe" => command_array(j)(2) <= 14;
				when "Ret " => command_array(j)(2) <= 15;
				when HT&"Ret" => command_array(j)(2) <= 15;
				when others => command_array(j)(2) <= 0;
			end case;
			if (str(4) = HT) then
				command_array(j)(1) <= character_to_integer(str(3));
			else
				command_array(j)(1) <= string_to_integer(str(3)&str(4));
			end if;
		end if;
		if(str(3)&str(4)&str(5)&str(6) = "jump") then
			if(str(10) = ' ') then
				command_array(j-1)(3) <= character_to_integer(str(9));
			else
				command_array(j-1)(3) <= string_to_integer(str(9)&str(10));
			end if;
		end if;
		
	 if (j<45 ) then	 
	 j := j+1;
	 end if;
	 end loop;
	
	 file_close(in_file);   
    
	 --while (n <= 45) loop
    --wait until trg_sig = '1' ; 
	 --case res_string_array(n)(5)&res_string_array(n)(6)&res_string_array(n)(7)&res_string_array(n)(8) is
			--when "BYTE" => id_reg := 0 ; 
								--BYTE_TEXT <= text_line(6);
			--when "ANY " => id_reg := 1 ;
			--when "SET " => id_reg := 2 ;
								--SET_TEXT_START <= text_line(7);
								--if(text_line(6) = '-') then
									--OPTION <= false;
									--SET_TEXT_END <= text_line(5);
								--else
									--OPTION <= true;
									--SET_TEXT_END <= text_line(6);
								--end if;
			--when "RBYT" => id_reg := 3 ;
								--RBYTE_TEXT <= text_line(5);
			--when "OBYT" => id_reg := 4 ;
								--OBYTE_TEXT <= text_line(5);
			--when "POS " => id_reg := 5 ;
			--when "BACK" => id_reg := 6 ;
			--when "NBYT" => id_reg := 7 ;
								--RBYTE_TEXT <= text_line(5);
			--when "Call" => id_reg := 10 ;
			--when others => id_reg := 8 ;
		--end case;
		--ID <= id_reg;
		--n := n + 1;
		--end loop;
		
  end process;
  
end behave;