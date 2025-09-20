# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Files
INCLUDES = -Iinclude
SOURCES = src/main.cpp src/Horse.cpp src/Race.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXEC = horse_race

# Default target
all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Convenience targets
run: all
	./$(EXEC)

