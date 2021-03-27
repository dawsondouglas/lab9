#include "plane.h"
#include <iostream>

Plane::Plane(std::string name, int length, int altitude, int numProps)
{
    Plane::name = name;
    Plane::lengthInFeet = length;
    Plane::altitude = altitude;
    Plane::numProps = numProps;
    Plane::speed = 0;
}

Plane::~Plane()
{
}

void Plane::printDetails()
{
    std::cout << Plane::name << std::endl << "Number of props: " << Plane::numProps << std::endl <<
    "Altitude: " << Plane::altitude << std::endl << "Length: " << 
    Plane::lengthInFeet << std::endl << "Speed: " << Plane::speed << std::endl;
}

void Plane::ascend()
{
    Plane::altitude += 10;
}
void Plane::descend()
{
    if (Plane::altitude != 0)
    {
        Plane::altitude -= 10;
    }
    
}
void Plane::speedUp()
{
    Plane::speed += 20;
}
void Plane::brake()
{
    if (Plane::speed != 0)
    {
        Plane::speed -= 20;
    }
}