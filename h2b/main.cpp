#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car{

   private:

std::string brand;
std::string model;
int yearModel;


public:

Car (const std::string& b, const std::string& m, int y)
        : brand(b), model(m), yearModel(y) {}


void printData() const {

    std::cout << "Brand: " << brand << "\n";
    std::cout << "Model: " << model << "\n";
    std::cout << "yearModel: " << yearModel << "\n";

}
};


int main()

{vector<Car> CarList;

    //luodaan Car-luokan oloita
    Car objectCar0("Audi", "A5",2020);
    Car objectCar1("Tesla","3",2023);
    Car objectCar2("Volkswagen","Beetle",1973);



    //lisätään luodut oliot listaan
    CarList.push_back(objectCar0);
    CarList.push_back(objectCar1);
    CarList.push_back(objectCar2);

    std::cout << "Second car: \n";
    objectCar1.printData();

    std::cout <<"\nAll cars: \n";
    for(int x=0; x<=3; x++){
        CarList[x].printData();
    }
    return 0;
};
