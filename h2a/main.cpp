#include <iostream>

using namespace std;

//vaihe 1

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData(){
        std:: cout << "Brand: " <<brand << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << yearModel << "\n";
}

    void setBrand(const string a){
        brand=a;
    }

    void setModel(const string b){
        model=b;
    }

    void setYearModel(int c){
        yearModel=c;
    }
};

int main()
{
    Car myCar;

    myCar.setBrand ("Audi");
    myCar.setModel("A5");
    myCar.setYearModel(2020);

    myCar.printData();

    return 0;
};



