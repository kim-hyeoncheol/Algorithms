GCC = g++
DFLAG = -DDEBUG
#CFLAG = -Wall -O2 -lm -lcrypt -pipe -DONLINE_JUDGE
CFLAG = -Wall -O2 -std=c++11 -pipe -DONLINE_JUDGE
#LFLAG = -lm -lcrypt
LFLAG = -lm

TARGET = main
BIN = $(TARGET).bin
SRC = $(TARGET).cpp
INPUT = input.txt
TMP_INPUT = input.tmp.txt
OUTPUT_ACTUAL = output.actual.txt
OUTPUT_EXPECTED = output.txt

#ALL: $(BIN)
#	./$(BIN) < $(TMP_INPUT)

$(OUTPUT_ACTUAL): $(BIN)
	./$(BIN) < $(INPUT) > $(OUTPUT_ACTUAL)
	diff $(OUTPUT_ACTUAL) $(OUTPUT_EXPECTED)

$(BIN): $(SRC)
	$(GCC) $(CFLAG) $(LFLAG) $(DFLAG) -o $(BIN) $(SRC)

clean:
	rm $(BIN)
