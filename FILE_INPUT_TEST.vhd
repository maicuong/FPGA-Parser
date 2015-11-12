----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:54:02 11/12/2015 
-- Design Name: 
-- Module Name:    FILE_INPUT_TEST - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use STD.textio.all;
use ieee.std_logic_textio.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity FILE_INPUT_TEST is
	port(
	CLK : in std_logic );
end FILE_INPUT_TEST;

architecture Behavioral of FILE_INPUT_TEST is
	file in_file : text;
	type string_array is array(1 to 45) of string(1 to 25);
	signal res_string_array : string_array := (others => (others => ' '));

begin

process
       
       variable l:         line;
       variable c:         character;
       variable is_string: boolean;
		 variable j:         natural := 1;
       
   begin
	
	wait until (CLK = '1') ;
	file_open(in_file, "math_input.txt",  read_mode);
      	  
			  
     while not endfile(in_file) loop		
     readline(in_file, l);
     -- clear the contents of the result string
     for i in res_string_array'range loop
         res_string_array(j)(i) <= ' ';
     end loop;   
     -- read all characters of the line, up to the length  
     -- of the results string
     for i in res_string_array'range loop

    read(l, c, is_string);
    if is_string then res_string_array(j)(i) <= c;
    else exit;
    end if;
   
     end loop;
		
		j := j+1;
		end loop;
                     
end process;


end Behavioral;

