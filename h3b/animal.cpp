#include "animal.h"
#include <iostream>

Animal::Animal() {}


    Animal::~Animal()   {
        cout << "Animal tuohoutuu" << endl;
    }


    void Animal::callOut() const {
        cout << "Eläin ääntelee" << endl;
    }




