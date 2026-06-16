CXX = g++

CXXFLAGS = -Wall -I./include

TARGET = main

SRCS_CC = $(wildcard src/*.cc main.cc)
OBJS = $(SRCS_CC:.cc=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) $(TARGET).exe