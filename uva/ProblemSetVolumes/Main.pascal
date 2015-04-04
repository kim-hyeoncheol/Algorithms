(* @JUDGE_ID: 1000AA 100 Pascal "Easy algorithm" *)

(*  KBSU team 99 {ST} *)
(* The 3n+1 problem *)

program p100 (input, output);

var
  i, j: integer;

function getCL(N: integer): integer;
var k: integer;
begin
  k := 1;
  while N <> 1 do begin
    if odd(N) then N := 3*N + 1
    else N := N div 2;
    k := k + 1;
  end;
  getCL := k;
end;

function getMaxCL(i, j: integer): integer;
var k: integer;
  max, curCL: integer;
begin
  max := 0;
  for k:=i to j do begin
    curCL := getCL(k);
    if curCL > max then max := curCL;
  end;
  getMaxCL := max;
end;

begin
  while not eof(input) do begin
    readln(i, j);
    write(i, ' ', j, ' ');
    if i < j then
      writeln(getMaxCL(i, j))
    else
      writeln(getMaxCL(j, i));
  end;
end.
