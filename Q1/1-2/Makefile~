CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = 1_1.o
TARGET = 1_1


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
1_1.o: 1_1.cpp
	$(CXX) $(CXXFLAGS) 1_1.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
