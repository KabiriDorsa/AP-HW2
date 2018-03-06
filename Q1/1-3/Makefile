CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = 1_3.o
TARGET = 1_3


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
1_3.o: 1_3.cpp
	$(CXX) $(CXXFLAGS) 1_3.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
