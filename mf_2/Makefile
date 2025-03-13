TARGET = mf_training

CXX = g++
CPPFLAGS = -std=c++17 -Wall -Wextra -g3
LDFLAGS = -lm

SRC = main.cpp math.cpp

OBJS = $(SRC:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(TARGET) $(LDFLAGS)

%.o: %.cpp math.h
	$(CXX) $(CPPFLAGS) -c $< -o $@

run: $(TARGET)
	@./$(TARGET)

clean:
	rm -f *.o $(TARGET)

distclean: clean
	rm -f *~

.PHONY: all clean distclean

all: $(TARGET) 
