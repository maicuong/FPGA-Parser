library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.numeric_std.all;

entity RSET_VHDL is
	port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		--CONTINUE_TRG : in std_logic ;
		NEZ_IN_START : in character := 'a';
		NEZ_IN_END : in character := 'z';
		OPTION : in integer ;
		TEXT_IN : in std_logic_vector(7 downto 0);
		COUNT_IN : in integer := 4;
		COUNT_OUT : out integer ;
		--FAIL : out std_logic := '0' ;
		CONTINUE_RDY : out std_logic ;
		RDY_ONE : out std_logic := '0');
end RSET_VHDL;

architecture Behavioral of RSET_VHDL is
	
   --signal count_out_reg : integer := 1;
	--signal match_reg : std_logic ;
	--signal fail_reg : std_logic ;
	--signal rdy_reg : std_logic := '0' ;
	
begin

	--match, count_out
	process (CLK)
		variable i : integer := 1;
		variable count_out_reg : integer := 1;
		variable match_reg : std_logic ;
		variable fail_reg : std_logic ;
	begin
		if(CLK'event and CLK = '1') then
			if (R = '1') then
				match_reg := '0' ;
			elsif (TRG_ONE = '1') then
				--i := COUNT_IN ;
			if(((OPTION = 0 or OPTION = 1) and (TEXT_IN = std_logic_vector(to_unsigned(natural(character'pos(NEZ_IN_START)),8)) or TEXT_IN = std_logic_vector(to_unsigned(natural(character'pos(NEZ_IN_END)),8)))) 
					or((OPTION = 2) and (TEXT_IN >= std_logic_vector(to_unsigned(natural(character'pos(NEZ_IN_START)),8)) and TEXT_IN <= std_logic_vector(to_unsigned(natural(character'pos(NEZ_IN_END)),8))))) then
					match_reg := '1' ;
					fail_reg := '0';
					--count_out_reg <= COUNT_IN + 1;
				else
					match_reg := '0' ;
					fail_reg := '1' ;
					--count_out_reg <= COUNT_IN;
				end if;
			else
				match_reg := '0' ;
				fail_reg := '0' ;
			end if;
		end if;
		
	COUNT_OUT <= count_out_reg ;
	CONTINUE_RDY <= match_reg ;
	RDY_ONE <= fail_reg ;
	end process;
	
	----------------------------------------------
	--rdy_reg
	----------------------------------------------
	--process (CLK)
	--begin
		--if (CLK'event and CLK = '1') then
			--if (R='1') then
				--rdy_reg <= '0';
			--elsif (match_reg = '1') then
				--rdy_reg <= '1';
			--else
				--rdy_reg <= '0';
			--end if;
		--end if;
	--end process;
	------------------------------------
	

	
end Behavioral;
