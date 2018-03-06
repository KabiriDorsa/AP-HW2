CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = 4.o
TARGET = 4


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
4.o: 4.cpp
	$(CXX) $(CXXFLAGS) 4.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
