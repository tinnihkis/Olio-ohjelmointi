#include "a2.h"

A2::A2(B &value) : refB(value)
{
}


std::string A2::getBinfo()
{
    return refB.getInfo();
}


void A2::setBinfo(const std::string &value)
{
    refB.setInfo(value);
}
