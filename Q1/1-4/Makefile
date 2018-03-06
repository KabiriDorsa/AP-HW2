CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = 1_4.o
TARGET = 1_4


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
1_4.o: 1_4.cpp
	$(CXX) $(CXXFLAGS) 1_4.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
