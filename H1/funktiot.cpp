#include "funktiot.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum (double a, double b) {
    cout << "Summa: "<< a + b << endl;
}

void calcDiv(double a, double b) {
    if (b==0)
        throw std::runtime_error("jakaja ei saa olla nolla!");
    else
        cout<<"Osamaara: "<< a / b << endl;
}

double retSum(double a, double b) {
    return a + b;
}

double retDiv(double a, double b) {
    if (b == 0)
        throw std::runtime_error("jakaja ei saa olla nolla!");
    return a / b;
}
