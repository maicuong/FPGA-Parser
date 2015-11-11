----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:55:54 11/07/2015 
-- Design Name: 
-- Module Name:    ID_INCREMENT_VHDL - Behavioral 
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

entity ID_INCREMENT_VHDL is
	port (
		CLK : in std_logic ;
		TRG_ONE : in std_logic ;
		ID_IN : in integer ;
		ID_OUT : out integer);
end ID_INCREMENT_VHDL;

architecture Behavioral of ID_INCREMENT_VHDL is
	signal id_out_reg : integer ;
	
begin
	process(CLK) 
	begin
		if(CLK'event and CLK = '1') then
			if (TRG_ONE = '1') then
				id_out_reg <= ID_IN + 1 ;
			else
				id_out_reg <= ID_IN + 1;
			end if;
		end if;
	end process;
	
	ID_OUT <= id_out_reg ;

end Behavioral;

