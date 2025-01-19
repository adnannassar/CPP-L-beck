# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

# Executable
EXEC = main

# Source files
SRCS = main.cpp Person.cpp

# Header files
HEADERS = Person.h

# Build target
$(EXEC): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRCS)

# Clean target
clean:
	rm -f $(EXEC)
