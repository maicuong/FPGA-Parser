library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CONTROLLOR_VHDL is
	port (
	CLK : in std_logic ;
	START : in std_logic := '0');
end CONTROLLOR_VHDL;

architecture Behavioral of CONTROLLOR_VHDL is

	component FILE_INPUT_VHDL 
		port(
		TRG : in std_logic ;
		RDY_IN : in std_logic ;
		ID : out integer;
		BYTE_TEXT : out character ;
		SET_TEXT_START : out character ;
	   SET_TEXT_END : out character ;
	   OPTION : out boolean ;
		RBYTE_TEXT : out character ;
		OBYTE_TEXT : out character ;
		RDY_ONE : out std_logic);
	end component;
	
	component STATE_CONTROLLOR_VHDL
		port (
		CLK : in std_logic;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		RDY_IN : in std_logic ;
		ID : in integer;
		BYTE_TRG : out std_logic;
		ANY_TRG : out std_logic;
		SET_TRG : out std_logic;
		RBYTE_TRG : out std_logic;
		OBYTE_TRG : out std_logic);
	end component;
	
	component BYTE_VHDL 
		port(
		CLK : in std_logic ;
		R : in std_logic := '0';
		TRG_ONE : in std_logic ;
		TEXT_IN : in character ;
		NEZ_IN : in character ;
		COUNT_IN : in integer ;
		COUNT_OUT : out integer ;
		RDY_ONE : out std_logic);
	end component;
	
	component ANY_VHDL
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		COUNT_IN : in integer ;
		COUNT_OUT : out integer ;
		RDY_ONE : out std_logic);
	end component;
	
	component SET_VHDL
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		NEZ_IN_START : in character ;
		NEZ_IN_END : in character ;
		OPTION : in boolean ;
		TEXT_IN : in character;
		COUNT_IN : in integer;
		COUNT_OUT : out integer;
		RDY_ONE : out std_logic);
	end component;
	
	component RBYTE_VHDL
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		TEXT_IN : in string(1 to 10) ;
		NEZ_IN : in character := 'a';
		COUNT_IN : in integer := 1;
		COUNT_OUT : out integer ;
		RDY_ONE : out std_logic := '0');
	end component;
	
	component OBYTE_VHDL
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		TEXT_IN : in character := 'a';
		NEZ_IN : in character := 'a';
		COUNT_IN : in integer := 1;
		COUNT_OUT : out integer ;
		RDY_ONE : out std_logic := '0');
	end component;
	
	subtype digit is integer range 1 to 10 ;
	signal count : digit := 1;
	type count_all is array (0 to 4) of digit;
	signal count_array : count_all := (1,1,1,1,1) ;
	
	signal text_file_in : string(1 to 10) := "abaaa2aaaa" ;
	signal text_in_reg : character := ' ' ;
	signal next_rdy_array : std_logic_vector(4 downto 0) ;
	signal next_rdy, state_next : std_logic ;
	signal id_reg : integer := 0 ;
	signal byte_trg_reg, any_trg_reg ,set_trg_reg, rbyte_trg_reg, obyte_trg_reg: std_logic ;
	signal byte_text_reg : character ;
	
	signal set_text_start_sig, set_text_end_sig : character;
	signal set_option_sig : boolean;
	
	signal rbyte_text_reg : character;
	
	signal obyte_text_reg : character;
	
	--MAX function
	function max_count(c:count_all) return integer is
		variable i : integer ;
		variable max : integer ;
		begin
		max := c(0);
		for i in c'range loop
			if (c(i) > max) then
				max := c(i) ;
			end if;
		end loop;
		return max;
	end max_count;
		
begin
	
	count <= max_count(count_array) ;
	next_rdy <= next_rdy_array(0) or next_rdy_array(1) or next_rdy_array(2) or next_rdy_array(3) or next_rdy_array(4);
	
	FILE_INPUT : FILE_INPUT_VHDL
	port map(	
		TRG => START,
		RDY_IN => next_rdy,
		ID => id_reg,
		BYTE_TEXT => byte_text_reg,
		SET_TEXT_START => set_text_start_sig,
	   SET_TEXT_END => set_text_end_sig,
	   OPTION => set_option_sig,
		RBYTE_TEXT => rbyte_text_reg,
		OBYTE_TEXT => obyte_text_reg,
		RDY_ONE => state_next);

	STATE_CONTROLLOR : STATE_CONTROLLOR_VHDL 
	port map (
		CLK => CLK ,
		ID => id_reg ,
		R => '0' ,
		TRG_ONE => START ,
		RDY_IN => next_rdy ,
		BYTE_TRG => byte_trg_reg ,
		ANY_TRG => any_trg_reg,
		SET_TRG => set_trg_reg,
		RBYTE_TRG => rbyte_trg_reg,
		OBYTE_TRG => obyte_trg_reg);

	BYTE : BYTE_VHDL port map (
		CLK => CLK ,
		R => '0' ,
		TRG_ONE => byte_trg_reg,
		TEXT_IN => text_in_reg,
		NEZ_IN => byte_text_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(0),
		RDY_ONE => next_rdy_array(0));
		
	ANY : ANY_VHDL port map (
	   CLK => CLK ,
		R => '0',
		TRG_ONE => any_trg_reg ,
		COUNT_IN => count,
		COUNT_OUT => count_array(1),
		RDY_ONE => next_rdy_array(1));
		
	SET : SET_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => set_trg_reg,
		NEZ_IN_START => set_text_start_sig,
		NEZ_IN_END => set_text_end_sig,
		OPTION => set_option_sig,
		TEXT_IN => text_in_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(2),
		RDY_ONE => next_rdy_array(2));
		
	RBYTE : RBYTE_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => rbyte_trg_reg,
		TEXT_IN => text_file_in,
		NEZ_IN => rbyte_text_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(3),
		RDY_ONE => next_rdy_array(3));
		
	OBYTE : OBYTE_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => obyte_trg_reg,
		TEXT_IN => text_in_reg,
		NEZ_IN => obyte_text_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(4),
		RDY_ONE => next_rdy_array(4));
		
	process(CLK)
		variable i : integer := 1;
	begin
		if(CLK'event and CLK = '1') then
			i := count ;
			text_in_reg <= text_file_in(i);
		end if;
	end process;
	
end Behavioral;
