# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

# Executable
EXEC = main

# Source files
SRCS = main.cpp Medium.cpp Audio.cpp Bild.cpp

# Header files
HEADERS = Medium.h Audio.h Bild.h Trends.h

# Build target
$(EXEC): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRCS)

# Clean target
clean:
	rm -f $(EXEC)
