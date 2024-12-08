#include "classb.h"

void ClassB::setInfo(const std::string& newInfo) {
    info = newInfo;
}

std::string ClassB::getInfo() const {
    return info;
}
