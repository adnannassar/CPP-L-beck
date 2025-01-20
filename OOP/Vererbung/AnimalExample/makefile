# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

# Executable
EXEC = main

# Source files
SRCS = main.cpp Animal.cpp Cat.cpp

# Header files
HEADERS = Animal.h Cat.h

# Build target
$(EXEC): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRCS)

# Clean target
clean:
	rm -f $(EXEC)
