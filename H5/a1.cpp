#include "a1.h"

A1::A1(B value) : objectB(value)
{
}

std::string A1::getBinfo()
{
    return objectB.getInfo();
}

void A1::setBinfo(const std::string &value)
{
    objectB.setInfo(value);
}
