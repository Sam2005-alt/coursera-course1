# Makefile

# Compiler settings
CC = gcc
CFLAGS = -Wall

# Compiler flags for debug and course switches
ifeq ($(VERBOSE), 1)
    CFLAGS += -DVERBOSE
endif

ifeq ($(COURSE1), 1)
    CFLAGS += -DCOURSE1
endif

# Source files and object files
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# Target executable name
TARGET = course1_program

# Default rule to build the target
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

# Rule for creating object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files and executable
clean:
	rm -f $(OBJ) $(TARGET)
