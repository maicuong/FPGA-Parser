library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use STD.textio.all;
use ieee.std_logic_textio.all;

entity TEXT_INPUT_VHDL is
	port(
	CLK : in std_logic ;
	TRG : in std_logic ;
	RDY : in std_logic ;
	STR_RDY : in std_logic ;
	COUNT_IN : in integer := 1;
	COUNT_OUT : out integer ;
	CONTINUE : out std_logic := '0';
	CHAR_OUT : out character ;
	STR_OUT : buffer string(1 to 2) );
end TEXT_INPUT_VHDL;

architecture Behavioral of TEXT_INPUT_VHDL is
	signal string_line_no : natural := 1;
	--signal char_no : natural := 1;
	--signal text_in_reg : character := ' ' ;
	--signal count_out_reg : integer := 1;
	--file in_file : text;
	constant CHAR_NUMBER : integer := 100;
	constant LINE_NUMBER : integer := 15;
	type string_array is array(1 to LINE_NUMBER) of string(1 to CHAR_NUMBER);
	signal res_string_array : string_array := (others => (others => ' '));
	
	signal trg_sig : std_logic;
	signal next_sig : std_logic := '0';
	 

begin

	CONTINUE <= next_sig;

	process
       file text_input : text is in "text_input.txt";
       variable l:         line;
       variable c:         character;
       variable is_string: boolean;
		 variable j,n:         natural := 1;
		 variable str_line_no_var,char_no_var : integer := 1;
		 
		 type string_array is array(1 to LINE_NUMBER) of string(1 to CHAR_NUMBER);
	    variable text_string_array : string_array := (others => (others => ' '));
       
		 variable str_out_sig : string(1 to 2) := "  ";
		 --variable next_sig : std_logic := '0';
		 
		--variable trg_sig : std_logic;
		 
   begin
	
	--trg_sig <= next_sig or CLK;
	
	--wait until (TRG = '1') ;
	--file_open(in_file, "text_input.txt",  read_mode);
      
    --if(CLK'event and CLK = '1') then 	  
			  
	--if (TRG = '1') then
	wait until CLK = '1';
		if(endfile(text_input)) then
			char_out <= ESC;
		else	
     while not endfile(text_input) loop	
		--if(TRG = '1' or RDY = '1') then
     readline(text_input, l);
     -- clear the contents of the result string
     for i in text_string_array(j)'range loop
         text_string_array(j)(i) := ' ';
     end loop;   
     -- read all characters of the line, up to the length  
     -- of the results string
	  --wait until CLK = '1'; 
	  --next_sig := true;
	  --while next_sig ;
     for i in text_string_array(j)'range loop
		--wait until CLK = '1';
	  --if(next_sig = '1') then
		--next_sig <= '0';
	  --end if;
	    
	--if(TRG = '1' or RDY = '1') then
	--trg_sig <= next_sig or CLK;
	
	--if (TRG = '1' or RDY = '1') then
	 --while(c = ' ') loop
	 --if (next_sig) then
	 
	 wait until (TRG = '1' or RDY = '1') ;
	 
	 for i in text_string_array(j)'range loop
    read(l, c, is_string);
	 exit when c /= ' ';
	 --if(c = ' ') then next;
	 --else
	 --next_sig := false;
	 --n := i ;
	 --end if;
	 end loop;
	 
	 --n := i ;
    if is_string then 
		--text_string_array(j)(i) := c;
		--res_string_array(j)(i) <= c;
		char_out <= c;
		--str_out_sig(1) := str_out_sig(2);
		--str_out_sig(2) := c;
		STR_OUT <= STR_OUT(2) & c;
		--RDY <= '0';
		--CONTINUE <= '0';
    else 
	 --next_sig <= '1';
	 char_out <= LF;
	 str_out <= str_out(2)&LF;
	 exit;
    end if;
   --end if;
	--end if;
     end loop;
		
		if(j < LINE_NUMBER) then
		j := j+1;
		end if;
		
		--end if;
		end loop;
		
		end if;
		
		--text_string_array(j-1)(n) := ESC;
		--res_string_array(j-1)(n) <= ESC;
		--char_out <= ESC;
		
	--end if;
		--if(text_string_array(1)(1) = ' ') then
		
		--while COUNT_IN < 30 loop
		--wait until CLK = '1' ;
		--if (TRG = '1' or RDY = '1') then
			--if(COUNT_IN - CHAR_NUMBER*(string_line_no-1)<CHAR_NUMBER) then
				--char_no_var := COUNT_IN - CHAR_NUMBER*(string_line_no-1) ;
			--else
				--str_line_no_var := str_line_no_var + 1;
				--char_no_var := COUNT_IN - 10*(str_line_no_var-1) ;
			--end if;
		--char_no <= COUNT ;
		--if(text_string_array(str_line_no_var)(char_no_var) = ' ' ) then
		--while (text_string_array(str_line_no_var)(char_no_var) = ' ')
		--for i in 1 to 2*CHAR_NUMBER loop
			--if(char_no_var = CHAR_NUMBER) then
				--if(str_line_no_var <3) then
				--str_line_no_var := str_line_no_var + 1;
				--char_no_var := 1;
				--exit when str_line_no_var > LINE_NUMBER;
				--end if;
			--else
				--char_no_var := char_no_var + 1;
			--end if;
				--i := i + 1;
			--exit  when text_string_array(str_line_no_var)(char_no_var) /= ' ' ;
			--end if;
		--end loop ;
		--end if;
		--else
		
		--if(RDY = '1' or TRG = '1') then
			--CHAR_OUT <= text_string_array(str_line_no_var)(char_no_var);
			--string_line_no <= str_line_no_var ;
			--COUNT_OUT <= char_no_var + 10*(str_line_no_var-1) + 1;
		--elsif (STR_RDY = '1') then
			--STR_OUT <= text_string_array(str_line_no_var)(char_no_var)&text_string_array(str_line_no_var)(char_no_var+1);
			--string_line_no <= str_line_no_var ;
			--COUNT_OUT <= char_no_var + CHAR_NUMBER*(str_line_no_var-1) + 1;			
		--end if;
		--end if;
		
		--end loop;
		
		--count_out_reg <= char_no_var;
           
       --end if;     

		--STR_OUT <= str_out_sig;
		
		--RDY <= next_sig;
		--CONTINUE <= next_sig;
end process;


end Behavioral;

