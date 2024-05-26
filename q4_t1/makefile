
# Makefile for q4_t1.cpp
# compile with gcov for code coverage
CXX = g++
CXXFLAGS = -Wall -g -fprofile-arcs -ftest-coverage
TARGET = q4_t1
SRC = q4_t1.cpp


all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)


.PHONY: clean all



clean:
	rm -f *.gcov *.gcda *.gcno $(TARGET)

