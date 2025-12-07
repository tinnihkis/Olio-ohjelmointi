#ifndef A2_H
#define A2_H

#include "b.h"
#include <string>


class A2
{
private:
    B &refB;
public:
    A2(B &value);
    std::string getBinfo();
    void setBinfo(const std::string &value);
};

#endif // A2_H
