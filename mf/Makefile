TARGET = my_project

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g3
LDFLAGS = -lm

SRC = hello.cpp factorial.cpp main.cpp
OBJS = $(SRC:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

%.o: %.cpp functions.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	@./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run clean

all: $(TARGET)