readln(N); 
counter := 0; 
for i := N-1 downto 1 do begin
    counter := counter + 1; 
    if N mod i = 0 then break; 
end; 
writeln(counter);
