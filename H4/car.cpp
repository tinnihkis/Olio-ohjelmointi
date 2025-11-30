#include "car.h"
#include <iostream>

Car::Car(const string& brand, const string& model) : brand(brand), model(model) {}

void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    for (auto &w : wheels) {
        w.setSize(17);
        w.setType("kesarengas");
    }
}

void Car::printDetails() const {
    cout << "Auto: " << model << " " << brand << endl;

    cout << "Moottori: "
         << engine.getHorsepower() << " hp, "
         << engine.getDisplacement() << " L" << endl;

    for (size_t i = 0; i < wheels.size(); i++) {
        cout << " Rengas " << i+1 << ":"
             <<wheels[i].getSize() << " tuumaa, "
             <<wheels[i].getType() << endl;
    }
}
