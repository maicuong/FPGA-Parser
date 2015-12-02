library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use STD.textio.all;
use ieee.std_logic_textio.all;

entity FILE_INPUT_VHDL is
	port(
	CLK : in std_logic := '0';
	TRG : in std_logic := '0';
	RDY_IN : in std_logic := '0';
	FAIL : in std_logic := '0' ;
	TEXT_In : in character := ' ';
	ID : out integer;
	BYTE_TEXT : out character := ' ' ;
	SET_TEXT_START : out character := ' ' ;
	SET_TEXT_SECOND : out character := ' ' ;
	SET_OPTION : out integer := 0 ;
	RBYTE_TEXT : out character := ' ' ;
	--OBYTE_TEXT : out character := ' ' ;
	STR_TEXT : out string(1 to 2) := "  " ;
	NBYTE_TEXT : out character := ' ' ;
	CMD_LINE_NO : out natural := 1;
	END_FAIL : buffer boolean := false ;
	PARSER_OK : buffer boolean := false;
	NEXT_TEXT_RDY : out std_logic := '0';
	NEXT_RDY : out std_logic := '0');
end FILE_INPUT_VHDL;

architecture behave of FILE_INPUT_VHDL is

  signal trg_sig : std_logic ;
 
  type cmd_record is record 
	id : integer ;
	save : integer;
	next_cmd : integer;
	char_first : character;
	char_second : character;
	char_first1 : character;
	char_second1 : character;
	option : integer;
  end record;
  type cmd_record_array is array(1 to 125) of cmd_record;
  signal command_array : cmd_record_array := (others => (id => 0, save => 0 , next_cmd => 0,
                                                         char_first => ' ', char_second => ' ',
																			char_first1 => ' ', char_second1 => ' ', option => 0));
															 
  --type string_array is array(1 to 170) of string(1 to 50);
  --signal res_string_array : string_array := (others => (others => ' '));
  
  signal test : string ( 1 to 50) ;
  
  type first_jump is record
	cmd : integer;
	char1 : character;
	char2 : character;
	jump_cmd : integer;
  end record;
  
  --type first_jump_array is array(1 to 10) of first_jump;
  --type first_table is record
	--cmd : integer;
	--jump_array : first_jump_array;
  --end record;
  
  type first_jump_array is array(1 to 30) of first_jump;
  signal first_array : first_jump_array := (others => (cmd => 0, char1 => ' ',
																		 char2 => ' ', jump_cmd => 0));
  
  
																			
  type int_array is array(1 to 200) of integer;
  signal call_stack : int_array := (others => 0);
  signal alt_stack : int_array := (others => 0) ;
  --signal first_stack : int_array := (0,16,25,17,0,0,0,0,0,0) ;
  
  --signal test : character := ' ';
  
  --convert character to integer
  function character_to_integer(char:character) return integer is
		variable int : integer;
		begin
			case char is
				when '1' => int := 1;
				when '2' => int := 2;
				when '3' => int := 3;
				when '4' => int := 4;
				when '5' => int := 5;
				when '6' => int := 6;
				when '7' => int := 7;
				when '8' => int := 8;
				when '9' => int := 9;
				when others => int := 0;
			end case;
			return int;
	end character_to_integer;
	
	--convert string to integer
	function string2_to_integer(str:string(1 to 2)) return integer is
		variable int : integer;
		variable int_1, int_10 : integer;
		begin
			int_10 := character_to_integer(str(1));
			int_1 := character_to_integer(str(2));
			int := 10*int_10 + int_1 ;
			return int;
	end string2_to_integer;
	
	--convert string to integer
	function string3_to_integer(str:string(1 to 3)) return integer is
		variable int : integer;
		variable int_1, int_10 ,int_100: integer;
		begin
			int_100 := character_to_integer(str(1));
			int_10 := character_to_integer(str(2));
			int_1 := character_to_integer(str(3));
			int := 100*int_100 + 10*int_10 + int_1 ;
			return int;
	end string3_to_integer;
	
	
	
	--next_rdy_function
	function next_rdy_function(n:std_logic_vector) return std_logic is
		variable i : integer;
		variable rdy : std_logic ;
		begin
			rdy := n(1);
			for i in n'range loop
				rdy := (rdy or n(i));
			end loop;
			return rdy;
	end next_rdy_function;


	signal call_top, alt_top : natural := 1;
	
	
	signal fail_sig : boolean := false;
	signal parser_ok_sig : boolean := false;
	
	signal CMD_LINE : natural := 1;
	
	
	--signal clk_accept : boolean := false;
	
begin
	trg_sig <= TRG or RDY_IN or FAIL or CLK;
   --next_rdy_sig <= next_rdy_function(rdy_array);
	
  process(CLK)
     file in_file : text is in "json.txt";
	 variable id_reg : integer := 0 ;
	 variable l:         line;
     variable c:         character;
     variable is_string: boolean;
	 variable line_no,cmd_no:         natural := 0;
	 variable cmd_read_no : natural := 1 ;
	 variable str : string(1 to 50) := (others => ' ');  
	 variable byt_no,set_no : natural := 1 ;
	 --variable call_top, alt_top : natural := 0;
	 variable clk_accept : boolean := false;
	 variable rdy_array : std_logic_vector(1 to 20) := (others => '0');
	 variable now_sig : integer := 0;
	 variable next_accept : boolean := false;
	 variable first_no : natural := 0 ;
	 variable first_top,jump_cmd_top: natural := 1;
	 
  begin 
	 --wait until trg = '1' ;
	 --file_open(in_file, "math_copy.moz",  read_mode);
	if(CLK'event and CLK = '1') then
	
			 if(trg = '1') then
	 while not endfile(in_file) loop
	 --wait until trg = '1' ;
		readline(in_file, l);
		-- clear the contents of the result string
		for i in str'range loop
				str(i) := ' ';
		end loop;   
		-- read all characters of the line, up to the length  
		-- of the results string
		for i in str'range loop
			read(l, c, is_string);
			if is_string then 
				str(i) := c;
						test(i) <= c;
				--test(i) <= c;
				--test <= str(256);
			else exit;
			end if;
		
		end loop;
		
		--if(cmd_no > 0 and cmd_no <= 125) then
		
		--if (cmd_no < 125) then
		--cmd_no := cmd_no + 1;
		--end if;
		
		if(str(2) /= 'F') then
		cmd_no := string3_to_integer(str(2)&str(3)&str(4));
		command_array(cmd_no).id <= string2_to_integer(str(6)&str(7));
		command_array(cmd_no).save <= string3_to_integer(str(9)&str(10)&str(11));
		command_array(cmd_no).next_cmd <= string3_to_integer(str(13)&str(14)&str(15));
		if(str(18)&str(19) = "HT") then
		command_array(cmd_no).char_first <= HT;
		elsif (str(18)&str(19) = "LF") then
		command_array(cmd_no).char_first <= LF;
		else
		command_array(cmd_no).char_first <= str(18);
		end if;
		if(str(22)&str(23) = "HT") then
		command_array(cmd_no).char_second <= HT;
		elsif (str(22)&str(23) = "LF") then
		command_array(cmd_no).char_second <= LF;
		else
		command_array(cmd_no).char_second <= str(22);
		end if;
		if(str(26)&str(27) = "HT") then
		command_array(cmd_no).char_first1 <= HT;
		elsif (str(26)&str(27) = "LF") then
		command_array(cmd_no).char_first1 <= LF;
		else
		command_array(cmd_no).char_first1 <= str(26);
		end if;
		if(str(30)&str(31) = "HT") then
		command_array(cmd_no).char_second1 <= HT;
		elsif (str(30)&str(31) = "LF") then
		command_array(cmd_no).char_second1 <= LF;
		else
		command_array(cmd_no).char_second1 <= str(30);
		end if;
		command_array(cmd_no).option <= character_to_integer(str(33));
		
		elsif (str(2) = 'F') then
			--first_no := string3_to_integer(str(4)&str(5)&str(6));
			
			first_array(first_top).cmd <= string3_to_integer(str(4)&str(5)&str(6));
			if(str(8) = ''') then
			first_array(first_top).char1 <= str(9);
			elsif(str(8)&str(9)&str(10) = "EOT") then
			first_array(first_top).char1 <= EOT;
			else
			first_array(first_top).char1 <= ESC;
			end if;
			first_array(first_top).char2 <= str(13);
			first_array(first_top).jump_cmd <= string3_to_integer(str(16)&str(17)&str(18));
			
			first_top := first_top + 1;
			
		end if;	
				
		end loop;
		file_close(in_file);
		end if;
		
		
		if(cmd_read_no > 0 and cmd_read_no < 125) then
		

              id_reg := command_array(cmd_read_no).id;
            
            if(TRG = '1' or RDY_IN = '1' or FAIL = '1') then
                          next_accept := true ;
                        end if;
            
              if (FAIL = '1') then 
                                      if(alt_stack(1) = 0) then 
                                          fail_sig <= true;
                                      else
														if(alt_stack(alt_top-1) > 0 and alt_stack(alt_top-1) < 125) then
                                          cmd_read_no := alt_stack(alt_top-1);
														end if;
                                          alt_stack(alt_top-1) <= 0;
                                          alt_top <= alt_top - 1;
                                      end if;
               elsif (RDY_IN = '1' or TRG = '1' ) then
                       case command_array(cmd_read_no).id is        
                                  when 9 => call_stack(call_top) <= command_array(cmd_read_no).save;
                                               if(command_array(cmd_read_no).next_cmd /= 0) then
                                               cmd_read_no := command_array(cmd_read_no).next_cmd;
                                           else
                                               cmd_read_no := cmd_read_no + 1;
                                           end if;
                                               call_top <= call_top + 1;
                      
                                  when 10 => alt_stack(alt_top) <= command_array(cmd_read_no).save;
                                             alt_top <= alt_top + 1;
                                               if(command_array(cmd_read_no).next_cmd /= 0) then
                                               cmd_read_no := command_array(cmd_read_no).next_cmd;
                                           else
                                               cmd_read_no := cmd_read_no + 1;
                                           end if;
                                  when 12 => for i in 1 to 30 loop
															if(cmd_read_no = first_array(i).cmd) then
																if(first_array(i).char2 = ' ') then
																	if(TEXT_IN = first_array(i).char1) then
																		cmd_read_no := first_array(i).jump_cmd;
																		exit;
																	elsif (first_array(i).char1 = ESC) then
																		cmd_read_no := first_array(i).jump_cmd;
																		exit;
																	else next;
																	end if;
																elsif(first_array(i).char1 < TEXT_IN and TEXT_IN < first_array(i).char2) then
																		cmd_read_no := first_array(i).jump_cmd;
																		exit;
																else next;
																end if;
															else next;
															end if;
															end loop;
															
                                  when 15 => if(call_stack(1) = 0) then 
                                                    parser_ok_sig <= true;
                                                else
                                                   cmd_read_no := call_stack(call_top-1);
                                                    call_stack(call_top-1) <= 0;
                                                    call_top <= call_top - 1;
                                                end if;
                                  when others => if(command_array(cmd_read_no).next_cmd /= 0) then
                                                          cmd_read_no := command_array(cmd_read_no).next_cmd;
                                                      else
                                                          cmd_read_no := cmd_read_no + 1;
                                                      end if;                        
                              end case;
                              end if;       
                 
                 
                 case command_array(cmd_read_no).id is
                                          when 1 =>    if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(1) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                                           BYTE_TEXT <= command_array(cmd_read_no).char_first;
                              
                                          when 3 => if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(3) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                                           SET_TEXT_START <= command_array(cmd_read_no).char_first;
                                                          SET_TEXT_SECOND <= command_array(cmd_read_no).char_second;
                                                          SET_OPTION <= command_array(cmd_read_no).option;
                              
                                          when 9 => if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(9) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                          when 10 =>if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(10) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                          when 11 =>if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(11) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                          when 12 => if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(12) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                          when 13 => if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(13) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                          when 14 => if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(14) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                                           SET_TEXT_START <= command_array(cmd_read_no).char_first;
                                                          SET_TEXT_SECOND <= command_array(cmd_read_no).char_second;
                                                          SET_OPTION <= command_array(cmd_read_no).option;
                                          when 15 => if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(15) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
														when 16 => if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(16) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
														when 17 =>    if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(17) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                                           BYTE_TEXT <= command_array(cmd_read_no).char_first;
														when 18 =>    if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(18) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
														when 19 =>    if (next_accept and (not fail_sig) and (not parser_ok_sig)) then
                                                              rdy_array := (others => '0');
                                                              rdy_array(19) := '1';
                                                              next_accept := false;
                                                           else
                                                              rdy_array := (others => '0');
                                                           end if;
                                                           STR_TEXT <= command_array(cmd_read_no).char_first&command_array(cmd_read_no).char_second;
                                          when others => rdy_array := (others => '0');
                                      end case;
          
            ID <= command_array(cmd_read_no).id;
            NEXT_RDY <= next_rdy_function(rdy_array);
            ----------------------------------------
            --NEXT_TEXT_RDY <= (rdy_array(1) or rdy_array(3) or rdy_array(14));
			end if;
            
            CMD_LINE_NO <= cmd_read_no ;
            
            END_FAIL <= fail_sig ;
            PARSER_OK <= parser_ok_sig ;
            
         end if;
	
  end process;
  
end behave;