//vaihe 2

#include <iostream>

using namespace std;


class Retangle {

private:
    double width;
    double height;

public:
    void setWidth(double a){
        width=a;
    }

    void setHeight(double b){
        height=b;
    }

    double getArea() const{
        return width * height;

    }

    double getCircum() const{
        return 2 * (width+height);
    }

};

int main(){

    Retangle*object = new Retangle;

    object ->setWidth(60);
    object ->setHeight(45);

    std::cout << "Rectangle Area: " << object->getArea() << "\n";
    std::cout << "Rectangle Circumference: " << object->getCircum() << "\n";

    delete object;

    return 0;
}
