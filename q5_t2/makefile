CC = g++
CFLAGS = -Wall -pg

all: brute_o3 improve_o2 kadanes

brute_o3: brute_o3.cpp
	$(CC) $(CFLAGS) -o brute_o3 brute_o3.cpp

improve_o2: improve_o2.cpp
	$(CC) $(CFLAGS) -o improve_o2 improve_o2.cpp

kadanes: kadanes.cpp
	$(CC) $(CFLAGS) -o kadanes kadanes.cpp

.PHONY: clean all

clean:
	rm -f brute_o3 improve_o2 kadanes






# ./brute_o3 123 100
# gprof brute_o3 gmon.out > analysis_brute_o3_100.txt

# ./brute_o3 123 1000
# gprof brute_o3 gmon.out > analysis_brute_o3_1000.txt

#need to run again
# ./brute_o3 123 10000
# gprof brute_o3 gmon.out > analysis_brute_o3_10000.txt

# ./improve_o2 123 100
# gprof improve_o2 gmon.out > analysis_improve_o2_100.txt


# ./improve_o2 123 1000
# gprof improve_o2 gmon.out > analysis_improve_o2_1000.txt


# ./improve_o2 123 10000
# gprof improve_o2 gmon.out > analysis_improve_o2_10000.txt

# ./kadanes 123 100
# gprof kadanes gmon.out > analysis_kadanes_100.txt


# ./kadanes 123 1000
# gprof kadanes gmon.out > analysis_kadanes_1000.txt


# ./kadanes 123 10000
# gprof kadanes gmon.out > analysis_kadanes_10000.txt



# gprof brute_o3 gmon.out > analysis_brute_o3.txt












# CXX = g++
# CXXFLAGS = -Wall -g -pg
# TARGET = q5_t1
# SRC = q5_t1.cpp

# all: $(TARGET)

# $(TARGET): $(SRC)
# 	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# run: $(TARGET)
# 	./$(TARGET) 123 100
# 	./$(TARGET) 123 1000
# 	./$(TARGET) 123 1001

# gprof: $(TARGET)
# 	gprof $(TARGET) gmon.out > analysis.txt

# .PHONY: clean all run gprof

# clean:
# 	rm -f *.o $(TARGET) gmon.out analysis.txt





# # Variables
# CXX = g++
# CXXFLAGS = -Wall -std=c++11
# SRCS = main.cpp q5_t1.cpp
# OBJS = $(SRCS:.cpp=.o)
# TARGET = program

# # Default target
# all: $(TARGET)

# # Linking
# $(TARGET): $(OBJS)
# 	$(CXX) $(CXXFLAGS) -o $@ $^

# # Compilation
# %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# # Clean up
# clean:
# 	rm -f $(OBJS) $(TARGET)