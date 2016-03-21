GCC = g++
DFLAG = -DDEBUG
#CFLAG = -Wall -O2 -lm -lcrypt -pipe -DONLINE_JUDGE
CFLAG = -Wall -O2 -std=c++11 -pipe -DONLINE_JUDGE
#LFLAG = -lm -lcrypt
LFLAG = -lm

TARGET = Main
BIN = $(TARGET).bin
SRC = $(TARGET).cpp
INPUT = input.txt
OUTPUT_ACTUAL = output.actual.txt
OUTPUT_EXPECTED = output.txt

$(OUTPUT_ACTUAL): $(BIN) $(INPUT)
	./$(BIN) < $(INPUT) > $(OUTPUT_ACTUAL)
	diff $(OUTPUT_ACTUAL) $(OUTPUT_EXPECTED)

$(BIN): $(SRC)
	$(GCC) $(CFLAG) $(LFLAG) $(DFLAG) -o $(BIN) $(SRC)

clean:
	rm $(BIN)
