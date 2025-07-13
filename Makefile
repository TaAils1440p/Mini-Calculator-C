# Compiler to use
CC = gcc

# Source file and output executable
SRC = mini_calculator.c
OUT = mini_calculator

# Compiler flags (add -Wall for warnings)
CFLAGS = -Wall

# Default target
all: $(OUT)

# Build the executable
$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

# Remove the executable
clean:
	rm -f $(OUT)

# Clean and rebuild everything
rebuild: clean all