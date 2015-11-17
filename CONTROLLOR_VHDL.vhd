library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CONTROLLOR_VHDL is
	port (
	CLK : in std_logic ;
	START : in std_logic := '0' ;
	PARSER_ERROR : out boolean := false ;
	PARSER_OK : out boolean := false);
end CONTROLLOR_VHDL;

architecture Behavioral of CONTROLLOR_VHDL is

	------------------------------------------------
	--Need to fix when add new
	------------------------------------------------
	component FILE_INPUT_VHDL 
		port(
		CLK : in std_logic;
		TRG : in std_logic ;
		RDY_IN : in std_logic ;
		FAIL : in std_logic ;
		ID : out integer;
		BYTE_TEXT : out character ;
		SET_TEXT_START : out character ;
	   SET_TEXT_SECOND : out character ;
	   SET_OPTION : out integer ;
		RBYTE_TEXT : out character ;
		OBYTE_TEXT : out character ;
		NBYTE_TEXT : out character ;
		CMD_LINE_NO : out natural;
		END_FAIL : buffer boolean ;
	   PARSER_OK : buffer boolean ;
		NEXT_RDY : out std_logic );
	end component;
	
	------------------------------------------------
	--Need to fix when add new
	------------------------------------------------
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
		OBYTE_TRG : out std_logic;
		POS_TRG : out std_logic;
		BACK_TRG : out std_logic;
		NBYTE_TRG : out std_logic;
		RSET_TRG : out std_logic;
		OTHERS_TRG : out std_logic);
--		CALL_TRG : out std_logic := '0';
--		ALT_TRG : out std_logic := '0';
--		SKIP_TRG : out std_logic := '0';
		--CALL_TRG : out std_logic := '0';
--		FIRST_TRG : out std_logic := '0';
--		RET_TRG : out std_logic := '0');
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
		OPTION : in integer ;
		TEXT_IN : in character;
		COUNT_IN : in integer;
		COUNT_OUT : out integer;
		FAIL : out std_logic ;
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
	
	component RSET_VHDL 
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		NEZ_IN_START : in character := 'a';
		NEZ_IN_END : in character := 'z';
		OPTION : in integer ;
		TEXT_IN : in string(1 to 10) := "aa2aaaa1aa" ;
		COUNT_IN : in integer := 4;
		COUNT_OUT : out integer ;
		--FAIL : out std_logic := '0' ;
		RDY_ONE : out std_logic := '0');
	end component;
	
	------------------------------------------------
	--Need to fix
	------------------------------------------------
	component POS_VHDL
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		COUNT_IN : in integer := 1;
		COUNT_OUT : out integer ;
		RDY_ONE : out std_logic := '0');
	end component;
	
	component BACK_VHDL
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		POS : in integer ;
		COUNT_OUT : out integer ;
		RDY_ONE : out std_logic := '0');
	end component;
	-------------------------------------------------
	
	component NBYTE_VHDL
		port(
		CLK : in std_logic ;
		R : in std_logic ;
		TRG_ONE : in std_logic ;
		TEXT_IN : in string(1 to 10) ;
		NEZ_IN : in character ;
		COUNT_IN : in integer ;
		RDY_ONE : out std_logic := '0');
	end component;
	
	
	------------------------------------------------
	--Need to fix when add new
	------------------------------------------------
	constant ARRAY_WIDTH : natural := 15 ;
	signal text_file_in : string(1 to 10) := "1+2*3     " ;
	signal byte_text_reg : character ;
	signal set_text_start_sig, set_text_end_sig : character;
	signal set_option_sig : integer ;
	signal rbyte_text_reg : character;	
	signal obyte_text_reg : character;
	signal nbyte_text_reg : character;
	signal pos_reg : integer := 0 ;
	
	signal fail_reg : std_logic ;
	
		
	--subtype digit is integer range 1 to 10 ;
	signal count : integer := 1;
	type count_all is array (1 to ARRAY_WIDTH) of integer;
	signal count_array : count_all := (others => 1) ;
	
	signal text_in_reg : character := ' ' ;
	signal next_rdy_array : std_logic_vector(ARRAY_WIDTH downto 0) := (others => '0') ;
	signal next_rdy : std_logic := '0';
	signal id_reg : integer := 0 ;
	signal trg_reg_array : std_logic_vector(ARRAY_WIDTH downto 1) := (others => '0') ;

	signal cmd_line : natural := 1;
	
	signal nosignal_rdy : std_logic := '0' ;
	
	--MAX function
	function max_count(c:count_all) return integer is
		variable i : integer ;
		variable max : integer ;
		begin
		max := c(1);
		for i in c'range loop
			if (c(i) > max) then
				max := c(i) ;
			end if;
		end loop;
		return max;
	end max_count;
	
	--next_rdy_function
	function next_rdy_function(n:std_logic_vector) return std_logic is
		variable i : integer;
		variable rdy : std_logic ;
		begin
			rdy := n(0);
			for i in n'range loop
				rdy := (rdy or n(i));
			end loop;
			return rdy;
	end next_rdy_function;
	
	
	signal end_fail : boolean := false ;
	signal end_parser_ok : boolean := false ;
					
begin
	
	count <= max_count(count_array) ;
	next_rdy <= (next_rdy_function(next_rdy_array));
	PARSER_ERROR <= end_fail ;
	PARSER_OK <= end_parser_ok ;
	
	------------------------------------------------
	--Need to fix when add new
	------------------------------------------------
	FILE_INPUT : FILE_INPUT_VHDL
	port map(	
	   CLK => CLK,
		TRG => START,
		RDY_IN => next_rdy,
		FAIL => fail_reg,
		ID => id_reg,
		BYTE_TEXT => byte_text_reg,
		SET_TEXT_START => set_text_start_sig,
	   SET_TEXT_SECOND => set_text_end_sig,
	   SET_OPTION => set_option_sig,
		RBYTE_TEXT => rbyte_text_reg,
		OBYTE_TEXT => obyte_text_reg,
		NBYTE_TEXT => nbyte_text_reg,
		CMD_LINE_NO => cmd_line,
		END_FAIL => end_fail,
		PARSER_OK => end_parser_ok,
		NEXT_RDY => nosignal_rdy);

	------------------------------------------------
	--Need to fix when add new
	------------------------------------------------
	STATE_CONTROLLOR : STATE_CONTROLLOR_VHDL 
	port map (
		CLK => CLK ,
		ID => id_reg ,
		R => '0' ,
		TRG_ONE => '0' ,
		RDY_IN => nosignal_rdy ,
		BYTE_TRG => trg_reg_array(1) ,
		ANY_TRG => trg_reg_array(2),
		SET_TRG => trg_reg_array(3),
		RBYTE_TRG => trg_reg_array(4),
		OBYTE_TRG => trg_reg_array(5),
		POS_TRG => trg_reg_array(6),
		BACK_TRG => trg_reg_array(7),
		NBYTE_TRG => trg_reg_array(8),
		RSET_TRG => trg_reg_array(14),
		OTHERS_TRG => next_rdy_array(0));
		--CALL_TRG => next_rdy_array(9),
		--ALT_TRG => next_rdy_array(10),
		--SKIP_TRG => next_rdy_array(11),
		--CALL_TRG : out std_logic := '0';
		--FIRST_TRG => next_rdy_array(12),
		--RET_TRG => next_rdy_array(15));


	BYTE : BYTE_VHDL port map (
		CLK => CLK ,
		R => '0' ,
		TRG_ONE => trg_reg_array(1),
		TEXT_IN => text_in_reg,
		NEZ_IN => byte_text_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(1),
		RDY_ONE => next_rdy_array(1));
		
	ANY : ANY_VHDL port map (
	   CLK => CLK ,
		R => '0',
		TRG_ONE => trg_reg_array(2) ,
		COUNT_IN => count,
		COUNT_OUT => count_array(2),
		RDY_ONE => next_rdy_array(2));
		
	SET : SET_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => trg_reg_array(3),
		NEZ_IN_START => set_text_start_sig,
		NEZ_IN_END => set_text_end_sig,
		OPTION => set_option_sig,
		TEXT_IN => text_in_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(3),
		FAIL => fail_reg,
		RDY_ONE => next_rdy_array(3));
		
	RBYTE : RBYTE_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => trg_reg_array(4),
		TEXT_IN => text_file_in,
		NEZ_IN => rbyte_text_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(4),
		RDY_ONE => next_rdy_array(4));
		
	OBYTE : OBYTE_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => trg_reg_array(5),
		TEXT_IN => text_in_reg,
		NEZ_IN => obyte_text_reg,
		COUNT_IN => count,
		COUNT_OUT => count_array(5),
		RDY_ONE => next_rdy_array(5));
		
	POS : POS_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => trg_reg_array(6),
		COUNT_IN => count,
		COUNT_OUT => pos_reg,
		RDY_ONE => next_rdy_array(6));
		
	BACK : BACK_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => trg_reg_array(7),
		POS => pos_reg,
		COUNT_OUT => count_array(7),
		RDY_ONE => next_rdy_array(7));
		
	NBYTE : NBYTE_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => trg_reg_array(8),
		TEXT_IN => text_file_in,
		NEZ_IN => nbyte_text_reg,
		COUNT_IN => count,
		RDY_ONE => next_rdy_array(8));
		
	RSET : RSET_VHDL port map (
		CLK => CLK,
		R => '0',
		TRG_ONE => trg_reg_array(14),
		NEZ_IN_START => set_text_start_sig,
		NEZ_IN_END => set_text_end_sig,
		OPTION => set_option_sig,
		TEXT_IN => text_file_in,
		COUNT_IN => count,
		COUNT_OUT => count_array(14),
		--FAIL : out std_logic := '0' ;
		RDY_ONE => next_rdy_array(14));


	process(CLK)
		variable i : integer := 1;
	begin
		if(CLK'event and CLK = '1') then
			i := count ;
			text_in_reg <= text_file_in(i);
		end if;
	end process;
	
end Behavioral;