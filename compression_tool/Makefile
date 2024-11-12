CXX = g++
CXXFLAGS = -std=c++20 -Wall
SRC_DIR = src

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = program

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)
	rm -f $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: clean