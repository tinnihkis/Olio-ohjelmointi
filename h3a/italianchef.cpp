#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(const std::string &name) : Chef(name) {
    std::cout << "ItalianChef konstruktori: " << name << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef destruktori: " << name << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << name << "makes pasta" << std::endl;
}

std::string ItalianChef::getName() const {
    return name;
}
