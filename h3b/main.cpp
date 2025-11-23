#include <memory>
#include "animal.h"
#include "dog.h"

int main() {
    Animal a;
    Dog d;

    a.callOut();
    d.callOut();

    std::unique_ptr<Animal> animalPtr = std::make_unique<Dog>();
    animalPtr->callOut();

    return 0;
}
