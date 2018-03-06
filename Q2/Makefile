CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = 2.o
TARGET = 2


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
2.o: 2.cpp
	$(CXX) $(CXXFLAGS) 2.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
