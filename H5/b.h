#ifndef B_H
#define B_H

#include <string>

class B
{
private:
    std::string info;
public:
    B() = default;
    std::string getInfo() const;
    void setInfo(const std::string &value);
};

#endif // B_H
