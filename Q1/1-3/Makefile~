CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = 1_2.o
TARGET = 1_2


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
1_2.o: 1_2.cpp
	$(CXX) $(CXXFLAGS) 1_2.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
