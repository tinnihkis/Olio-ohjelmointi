#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car c("Toyota", "Corolla");

    c.setEngine();
    c.setWheels();

    c.printDetails();

    return 0;
}
