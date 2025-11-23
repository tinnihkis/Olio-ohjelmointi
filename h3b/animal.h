#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once
#include <iostream>

class Animal {
public:
    Animal() = default;
    virtual ~Animal() = default;

    virtual void callOut() const {
        std::cout << "Eläin ääntelee." << std::endl;
    }
};
#endif // ANIMAL_H
