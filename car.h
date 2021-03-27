#ifndef CAR_CODE
#define CAR_CODE

#include <string>
#include "vehicle.h"

class Car : public Vehicle
{
    std::string color;
    int numDoors;
public:
    Car(std::string name, std::string color, int numDoors, int length);
    ~Car();
    void drift();
    void printDetails() override;
    void speedUp() override;
    void brake() override;
};
#endif 
