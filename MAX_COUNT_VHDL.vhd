----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:39:50 11/06/2015 
-- Design Name: 
-- Module Name:    MAX_COUNT_VHDL - Behavioral 
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MAX_COUNT_VHDL is
	port (
		CLK : in std_logic ;
		BYTE_COUNT : in integer ;
		ANY_COUNT : in integer ;
		COUNT : out integer);
end MAX_COUNT_VHDL;

architecture Behavioral of MAX_COUNT_VHDL is
	
	signal count_reg : integer ;
	
begin
	
	process(CLK)
	begin
		if(CLK'event and CLK = '1') then
			count_reg <= BYTE_COUNT ;
			if (ANY_COUNT > BYTE_COUNT) then
				count_reg <= ANY_COUNT ;
			end if;
		end if;
	end process;
	
	COUNT <= count_reg ;

end Behavioral;

