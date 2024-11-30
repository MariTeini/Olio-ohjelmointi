#ifndef CAR_H
#define CAR_H

#include <string>
#include "engine.h"
#include "wheel.h"
using namespace std;


class Car
{

private:
    Engine engine;
    Wheel wheels[4];
    string model;
    string brand;

public:
    Car(const std::string& brand, const std::string& model);

    void setEngine();
    void setWheels();

    void printDetails() const;
};

#endif // CAR_H
