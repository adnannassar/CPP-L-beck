# Compiler and flags
CC = g++
CFLAGS = -Wall -std=c++17

# Source files and headers
SRCS = main.cpp Person.cpp Angestellter.cpp Studnet.cpp
HEADERS = Person.h Angestellter.h Druckbar.h Student.h

# Output executable
TARGET = main

# Rules
all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
