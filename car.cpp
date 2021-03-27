#include "car.h"
#include <iostream>

Car::Car(std::string name, std::string color, int numDoors, int length) 
{
    Car::name = name;
    Car::color = color;
    Car::numDoors = numDoors;
    Car::lengthInFeet = length;
    Car::speed = 0;
}
Car::~Car()
{
}

void Car::drift()
{
    std::cout << "Skreeeeeeeee!!!!" << std::endl;
}
void Car::printDetails()
{
    std::cout << Car::name << std::endl << Car::color << std::endl <<
    "Number of doors: " << Car::numDoors << std::endl << "Length: " << 
    Car::lengthInFeet << std::endl << "Speed: " << Car::speed << std::endl;
}
void Car::speedUp()
{
    Car::speed += 10;
}
void Car::brake()
{
    if (Car::speed != 0)
    {
        Car::speed -= 10;
    }
    
}