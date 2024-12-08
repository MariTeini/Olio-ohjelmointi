#include <iostream>
#include <assosiationa.h>
#include <aggregationa.h>

using namespace std;

int main()
{
//2
int a = 5;
int b = 10;
//3
cout << "a:n arvo on: " << a << " ja osoite on: " << &a <<endl;
cout << "b:n arvo on: " << b << " ja osoite on: " << &b <<endl;

//4
int* myPointer = &a;
//5
cout << "Pointterin osoittama osoite on: " << myPointer << endl;
cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl;
//6
myPointer = &b;
//7
cout << "Pointerin osoittama osoite on: " << myPointer << endl;
cout << "Pointerin osoittaman muistipaikan arvo on: " << *myPointer << endl;
//8
int &refA = a;
cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
cout << "refA osoittaman muistipaikan arvo on : " << refA << endl;



ClassB objB;
objB.setInfo("Olion B asettama info");

AssosiationA objAss(objB);
objAss.setBinfo("Olion objAss asettama info");

cout<<"Assosiaatio esimerkki:"<<endl;
cout<<"objB: "<<objB.getInfo()<<endl;
cout<<"objAss: "<<objAss.getBinfo()<<endl;

cout<<"***********************"<<endl;
cout<<"Aggregaatio esimerkki:"<<endl;
ClassB &refB=objB;
AggregationA objAggr(refB);
objAggr.setBinfo("Olion Agr asettama info");
cout<<"objB: "<<objB.getInfo()<<endl;
cout<<"objAggr "<<objAggr.getBinfo()<<endl;
cout<<endl;

return 0;
}
