library IEEE;
use IEEE.std_logic_1164.all;
use STD.textio.all;
entity filename is
port(
	CLK : in std_logic);
end entity;
architecture beh of filename is
begin
process(CLK)
file thefile: text;
variable buf_out, buf_in: LINE;
variable fname: string(1 to 10);
variable f_status: FILE_OPEN_STATUS;
begin
if(CLK'event and CLK = '1') then
write(buf_out, string'("Enter file name:"));
writeline(output, buf_out);
readline(input, buf_in);
read(buf_in, fname);
file_open(f_status, thefile, fname, read_mode);
readline(thefile, buf_in);
writeline(output, buf_in);
--wait;
end if;
end process;
end architecture beh;