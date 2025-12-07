#include <iostream>
#include "b.h"

#include "a1.h"
#include "a2.h"



int main()
{

    using std::cout;
    using std::endl;

    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman musitipaikan arvo on: " << refA << endl;

    int b = 6;
    cout << "\nAlkuarvot ennen kokeiluja: a = " << a << ", b = " << b << endl;

    refA = b; // tämä kopioi b:n arvon a:han (ei sidonnan muutosta)
    cout << "refA = b; -> nyt a = " << a << " (refA viittaa edelleen a:han)" << endl;

    pointerA = &b;
    cout << "pointerA = &b; -> pointerA osoittaa nyt osoitteeseen " << pointerA << " ja *pointerA = " << *pointerA << endl;

    *pointerA = 10;
    cout << "Tämän jälkeen b = " << b << " ja a = " << a << endl;

    cout << "\n--- Oliot argumentteina ---" << endl;

    B objB;
    objB.setInfo("Olion B asettama info");

    A1 objA1(objB);            // kopio B:stä
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << "\n--- Referenssi argumenttina ---" << endl;

    B &refB = objB;           // viittaus olemassaolevaan objB:hen
    A2 objA2(refB);           // A2 saa viittauksen B:hen
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;

}
