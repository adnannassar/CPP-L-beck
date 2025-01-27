# Compiler and flags
CC = g++
CFLAGS = -Wall -std=c++17

# Source files and headers
SRCS = main.cpp Stack.cpp Person.cpp
HEADERS = Stack.h Person.h 

# Output executable
TARGET = main

# Rules
all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
