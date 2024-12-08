#ifndef CLASSB_H
#define CLASSB_H

#include <string>

class ClassB {
private:
    std::string info;

public:
    void setInfo(const std::string& newInfo);
    std::string getInfo() const;
};

#endif // CLASSB_H
