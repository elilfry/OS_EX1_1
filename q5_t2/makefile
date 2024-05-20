# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
SRCS = main.cpp q5_t1.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = program

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)