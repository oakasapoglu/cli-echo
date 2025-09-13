# Makefile for Chicken Scheme CLI Echo project

# Compiler
CSC = csc

# Target executable
TARGET = cli

# Source file
SRC = cli.scm

# Shell scripts
SPEED_TEST   = run-speedtest.sh
BOOLEAN_TEST = run-tests.sh

.PHONY: all clean run speedtest test

# Default target: build
all: $(TARGET)

# Compile the Chicken Scheme source: produce .c and executable
$(TARGET): $(SRC)
	$(CSC) -k $(SRC) -o $(TARGET)
	rm -f *.o

# Clean generated files
clean:
	rm -f $(TARGET) *.o *.c cli

# Run the CLI manually with example
run: $(TARGET)
	./$(TARGET) Hello World

# Run boolean correctness tests (shell script)
test: $(TARGET)
	bash $(BOOLEAN_TEST)

# Run speed test (shell script)
speedtest: $(TARGET) $(SPEED_TEST)
	bash $(SPEED_TEST)
