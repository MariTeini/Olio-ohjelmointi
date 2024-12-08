#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H
#include <classb.h>

using namespace std;



class AggregationA
{

    private:
        ClassB &refB;
    public:
        AggregationA(ClassB&);
        string getBinfo();
        void setBinfo(string);
    };


#endif // AGGREGATIONA_H
