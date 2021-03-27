#include <iostream>
#include <vector>
#include "vehicle.h"
#include "car.h"
#include "plane.h"

using namespace std;

int main() {
    vector<Vehicle*> vehicles;
    Car *car = new Car("Betty","Red",4,12);
    Plane *plane = new Plane("Gary", 16, 0, 2);
    car->speedUp();
    car->drift();
    plane->speedUp();
    plane->ascend();
    vehicles.push_back(car);
    vehicles.push_back(plane);

    for (Vehicle* v : vehicles)
    {
        (*v).printDetails();
    }  
}
