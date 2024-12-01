#include "dog.h"

Dog::Dog() {}


Dog::~Dog(){
    cout << "Dog tuohoutuu" << endl;

}

void Dog::callOut() const {
    cout << "Koira haukkuu" << endl;
}
