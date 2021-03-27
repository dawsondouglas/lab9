#ifndef PLANE_CODE
#define PLANE_CODE

#include <string>
#include "vehicle.h"

class Plane : public Vehicle
{
    int altitude;
    int numProps;
public:
    Plane(std::string name, int l, int altitude, int numProps);
    ~Plane();
    void ascend();
    void descend();
    void printDetails() override;
    void speedUp() override;
    void brake() override;
};

#endif 
