#include "chef.h"
#include <iostream>

Chef::Chef(const std::string &name) : name(name) {
    std::cout<< "Chef konstruktori: " << name << std::endl;
}

Chef::~Chef() {
    std::cout<< "Chef destruktori: "<< name << std::endl;
}

void Chef::makeSalad() {
    std::cout<< name << "makes salad" << std::endl;
}
void Chef::makeSoup() {
    std::cout<< name << "makes soup" << std::endl;
}
