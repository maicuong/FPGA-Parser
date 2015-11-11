library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity STATE_CONTROLLOR_VHDL is
	port (
		CLK : in std_logic;
		ID : in integer;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		RDY_IN : in std_logic ;
		BYTE_TRG : out std_logic := '0';
		ANY_TRG : out std_logic := '0';
		SET_TRG : out std_logic := '0';
		RBYTE_TRG : out std_logic := '0';
		OBYTE_TRG : out std_logic := '0');
end STATE_CONTROLLOR_VHDL;

architecture Behavioral of STATE_CONTROLLOR_VHDL is

	signal trg_one_reg : std_logic ;
	
begin
	trg_one_reg <= TRG_ONE or RDY_IN ;
	
	process(CLK)
	begin
		if (CLK'event and CLK = '1') then
			case id is
				when 0 => BYTE_TRG <= trg_one_reg ;
				when 1 => ANY_TRG <= trg_one_reg ;
				when 3 => SET_TRG <= trg_one_reg ;
				when 4 => RBYTE_TRG <= trg_one_reg ;
				when 5 => OBYTE_TRG <= trg_one_reg ;
				when others => BYTE_TRG <= '0';
			end case;
		end if;
	end process;

end Behavioral;
