#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef chef("Gordon Ramsay ");
    chef.makeSalad();
    chef.makeSoup();

    std::cout<< "-----" << std::endl;

    ItalianChef italianChef("Anthony Bourdain ");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();
    std::cout << "Name: " << italianChef.getName() << std::endl;


    return 0;
}
