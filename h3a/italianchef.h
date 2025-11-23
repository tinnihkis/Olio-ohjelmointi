#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

class ItalianChef : public Chef {
public:
    ItalianChef(const std::string &name);
    ~ItalianChef();
    void makePasta();
    std::string getName() const;
};

#endif // ITALIANCHEF_H
