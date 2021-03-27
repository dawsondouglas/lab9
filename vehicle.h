#ifndef VEHICLE_CODE
#define VEHICLE_CODE

#include <string>

class Vehicle
{
protected:
    int lengthInFeet;
    int speed;
    std::string name;
public:
    virtual void printDetails() = 0;
    virtual void speedUp() = 0;
    virtual void brake() = 0;
};

#endif
