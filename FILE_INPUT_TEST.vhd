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
	file data_in : text is in "sample.txt";

   type data_array is array(1 to 2,1 to 2) of std_logic_vector(7 downto 0);
   signal data1 :data_array;
begin

process
   
type Y_array is array (1 to 2,1 to 2) of integer; 
type un_array is array (1 to 2,1 to 2) of unsigned(7 downto 0); 
variable Y : Y_array; 
variable Y_un : un_array;
variable inline : line;
--variable v_char;
       
   begin
	
	--wait until CLK = '1';
	
	for i in 1 to 2 loop 
for j in 1 to 2 loop 
while not endfile (data_in) loop 
readline(data_in,inline);
read(inline,Y(i,j)); 
Y_un(i,j) := to_unsigned(Y(i,j),8);
data1(i,j) <= std_logic_vector(Y_un(i,j));
end loop; 
end loop; 
end loop; 
wait for 2 ns; 
                     
end process;


end Behavioral;

