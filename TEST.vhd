library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use STD.textio.all;
use ieee.std_logic_textio.all;

entity TEST is
	port(
	TRG : in std_logic := '0';
	RDY_IN : in std_logic := '0';
	ID : out integer);
end TEST;

architecture behave of TEST is

  file in_file : Text open read_mode is "math_copy.moz";
  --file in_file : text;
  signal trg_sig : std_logic ;
  
  --type command_row is array(1 to 3) of natural;
  --type command_cell is array(1 to 30) of command_row;
  --signal command_array : command_cell := (others => (others => 0));
  
  type string_array is array(1 to 10) of string(1 to 80);
  signal res_string_array : string_array := (others => (others => ' '));
  --signal test : string(1 to 40) := (others => ' ') ;
  
  
  
  signal test : character := ' ';
  
 
	
begin
	trg_sig <= TRG or RDY_IN;

  process 
	 variable id_reg : integer := 0 ;
	 variable l:         line;
    variable c:         character;
    variable is_string: boolean;
	 variable line_no,cmd_no:         natural := 1;
	 variable cmd_read_no : natural := 1 ;
	 variable str : string(1 to 1024) := (others => ' ');  
	 variable byt_no,set_no : natural := 1 ;
	 
	 variable j : natural := 0;
	 variable n : natural := 1;
  begin 
	 --wait until trg = '1' ;
	 --file_open(in_file, "math_copy.moz",  read_mode);
			
	 while not endfile(in_file) loop
	 wait until trg = '1' ;
		readline(in_file, l);
		-- clear the contents of the result string
		for i in str'range loop
				str(i) := ' ';
		end loop;   
		-- read all characters of the line, up to the length  
		-- of the results string
		for i in str'range loop
			read(l, c, is_string);
			if is_string then 
				str(i) := c;
				--res_string_array(line_no)(74*j+n) <= c;
				--test(i) <= c;
				test <= str(1000);
			else exit;
			end if;
			
			--if(n = 74) then
				--n := 1;
				--line_no := line_no + 1;
				--j := j + 1;
			--else 
				--n := n + 1;
			--end if;
		end loop;
		
		
		end loop;
		
  end process;
  
end behave;