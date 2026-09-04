CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g

programa: main.o punto.o
	$(CXX) main.o punto.o -o programa

main.o: main.cpp punto.h
	$(CXX) $(CXXFLAGS) -c main.cpp

punto.o: punto.cpp punto.h
	$(CXX) $(CXXFLAGS) -c punto.cpp

clean:
	rm -f *.o programa