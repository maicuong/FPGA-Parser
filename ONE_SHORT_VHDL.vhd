----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:25:41 10/13/2015 
-- Design Name: 
-- Module Name:    SBASE_TIMER_CB24RM_VHDL - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ONE_SHORT_VHDL is

	generic (
		BW : integer := 1
		);
		
	port (
		CLK : in std_logic;
		R : in std_logic;
		TRG_ONE : in std_logic;
		POUT_ONE : out std_logic);
end ONE_SHORT_VHDL;

architecture Behavioral of ONE_SHORT_VHDL is

	signal counter_reg : std_logic_vector(BW-1 downto 0) := (others => '0');
	signal counter_full : boolean;
	signal pout_reg : std_logic;
	signal pout_one_reg : std_logic;
	
begin

	counter_full <= (counter_reg = (counter_reg'range => '1'));
	
	process (CLK)
	begin
		if (CLK'event and CLK = '1') then
			if (R='1' or counter_full or (TRG_ONE = '1')) then
				counter_reg <= (others => '0');
			elsif (pout_reg = '1') then
				counter_reg <= counter_reg + '1' ;
			end if;
		end if;
	end process;
	
	process (CLK)
	begin
		if (CLK'event and CLK = '1') then
			if (R ='1') then
				pout_reg <= '0' ;
			elsif (counter_full) then
				pout_reg <= '0' ;
			elsif (TRG_ONE = '1') then
				pout_reg <= '1' ;
			end if;
		end if;
	end process;
	
	process (CLK)
	begin
		if (CLK'event and CLK = '1') then
			if (R='1') then
				pout_one_reg <= '0';
			elsif (counter_full) then
				pout_one_reg <= '1';
			else
				pout_one_reg <= '0';
			end if;
		end if;
	end process;
	
	POUT_ONE <= pout_one_reg;

end Behavioral;

