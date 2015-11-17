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
		OBYTE_TRG : out std_logic := '0';
		POS_TRG : out std_logic := '0';
		BACK_TRG : out std_logic := '0';
		NBYTE_TRG : out std_logic := '0';
		RSET_TRG : out std_logic := '0';
		OTHERS_TRG : out std_logic := '0');
		--CALL_TRG : out std_logic := '0';
		--ALT_TRG : out std_logic := '0';
		--SKIP_TRG : out std_logic := '0';
		--CALL_TRG : out std_logic := '0';
		--FIRST_TRG : out std_logic := '0';
		--RET_TRG : out std_logic := '0');
end STATE_CONTROLLOR_VHDL;

architecture Behavioral of STATE_CONTROLLOR_VHDL is

	signal trg_one_reg : std_logic ;
	signal trg_array : std_logic_vector(0 to 15);
	--signal now_sig : natural	:= 0;
	
begin
	trg_one_reg <= TRG_ONE or RDY_IN ;
	
	process(CLK)
		variable next_accept : boolean := false;
	begin
		if (CLK'event and CLK = '1') then
		   if(RDY_IN = '1' ) then
				next_accept := true ;
		   end if;
			case id is
				when 1 => if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(1) <= '1';
								--now_sig <= 1;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 2 => if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(2) <= '1';
								--now_sig <= 2;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 3 => if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(3) <= '1';
								--now_sig <= 3;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if; 
				when 4 => if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(4) <= '1';
								--now_sig <= 4;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 5 => if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(5) <= '1';
								--now_sig <= 5;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 6 => if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(6) <= '1';
								--now_sig <= 6;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 7 => if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(7) <= '1';
								--now_sig <= 7;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 8 =>  if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(8) <= '1';
								--now_sig <= 8;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 14 =>  if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(14) <= '1';
								--now_sig <= 14;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 9 =>  if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(9) <= '1';
								--now_sig <= 9;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 10 =>  if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(10) <= '1';
								--now_sig <= 10;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 11 =>  if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(11) <= '1';
								--now_sig <= 11;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when 12 =>  if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(12) <= '1';
								--now_sig <= 12;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				--when 13 => OTHERS_TRG <= trg_one_reg;
				when 15 =>  if (next_accept) then 
								trg_array <= (others => '0');
								trg_array(15) <= '1';
								--now_sig <= 15;
								next_accept := false;
							 else
							    trg_array <= (others => '0');
							 end if;
				when others => trg_array <= (others => '0'); 
			end case;

		end if;
	end process;

	BYTE_TRG <= trg_array(1);
	ANY_TRG <= trg_array(2);
	SET_TRG <= trg_array(3);
	RBYTE_TRG <= trg_array(4);
	OBYTE_TRG <= trg_array(5);
	POS_TRG <= trg_array(6);
	BACK_TRG <= trg_array(7);
	NBYTE_TRG <= trg_array(8);
	RSET_TRG <= trg_array(14);
	OTHERS_TRG <= (trg_array(9) or trg_array(10) or trg_array(11) or trg_array(12) or trg_array(15));
		
end Behavioral;