#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
#include <string>
#include <array>
using namespace std;

class Car
{
private:
    Engine engine;
    array<Wheel, 4> wheels;
    string model;
    string brand;


public:
    Car(const string& brand, const string& model);

    string getBrand() const;
    string getModel() const;

    void setEngine();
    void setWheels();
    void printDetails() const;
};

#endif // CAR_H
