#ifndef A1_H
#define A1_H

#include "b.h"
#include <string>


class A1
{
private:
    B objectB;
public:
    A1(B value);
    std::string getBinfo();
    void setBinfo(const std::string &value);
};

#endif // A1_H
