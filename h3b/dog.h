#ifndef DOG_H
#define DOG_H

#pragma once
#include "animal.h"

class Dog : public Animal {
public:
    Dog() = default;
    ~Dog() override = default;

    void callOut() const override {
        std::cout << "Koira haukkuu!" << std::endl;
    }
};


#endif // DOG_H
