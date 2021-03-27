vehicles: main.cpp car.o plane.o
	g++ -std=c++11 -o vehicles main.cpp car.o plane.o

car.o: car.cpp car.h
	g++ -std=c++11 -c car.cpp

plane.o: plane.cpp plane.h
	g++ -std=c++11 -c plane.cpp

clean:
	rm *.o vehicles
