#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(const std::string& chefName) : name(chefName) {
        std::cout << "Chef " << name << " konstrukori" << std::endl;
    }


    virtual ~Chef() {
        std::cout << "Chef " << name << " destruktori" << std::endl;
    }


    void makeSalad() {
        std::cout << "Chef " << name << " makes salad" << std::endl;
    }


    void makeSoup() {
        std::cout << "Chef " << name << " makes soup" << std::endl;
    }


    std::string getName() const {
        return name;
    }
};


class ItalianChef : public Chef {
private: std:: string name;
public:

    ItalianChef(const std::string& chefName) : Chef(chefName) {
        std::cout << "ItalianChef " << chefName << " konstruktori" << std::endl;
    }


    ~ItalianChef() {
      std::cout << "ItalianChef " << getName() << " destruktori" << std::endl;
    }


    void makePasta() {
        std::cout << "ItalianChef " << getName() << " makes pasta" << std::endl;
    }
};

int main() {

    ItalianChef italianChef("Anthony Bourdain");


    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();


    std::cout << "name of the Italian Chef is " << italianChef.getName() << std::endl;

    return 0;
}
