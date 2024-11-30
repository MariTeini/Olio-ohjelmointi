#include "car.h"
#include <iostream>

using namespace std;


Car::Car(const string& brand, const string& model) : brand(brand), model(model) {}

void Car::setEngine(){
        engine.setHorsepower(150);
        engine.setDisplacement(2.0);
    }

void Car::setWheels () {
        for (int i = 0; i< 4; i++){
            wheels[i].setSize(17);
            wheels[i].setType("kesäkummi");
        }
    }

    void Car::printDetails() const {
        cout << "Ajoneuvon tiedot:" << endl;
        cout << "Merkki" << brand << " Malli: " << model << endl;
        cout << "Moottori" << engine.getHorsepower() << " hevosvoima, tilavuus: " << engine.getDisplacement() << " l" << endl;



        for (int i = 0; i < 4; i++){
            cout << "Rengas" <<i + 1 << "Koko " << wheels[i].getSize()
                 << " Tyyppi: " << wheels[i].getType() << endl;
        }
    }
