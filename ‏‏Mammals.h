#ifndef __MAMMALS_H__
#define __MAMMALS_H__
#pragma once
#include "Animals.h"

class Mammals :
    public Animals
{
public:
    Mammals(const std::string& name);
    virtual ~Mammals();

    virtual short int getdurationofthepregnancy()const=0;
    virtual short int getnumofbrn()const=0;
    std::ostream& printdata(std::ostream& os)const;
private:

};

inline Mammals::Mammals(const std::string& name):Animals(name)
{
}
inline Mammals::~Mammals() {}
inline std::ostream& Mammals::printdata(std::ostream& os)const {
    Animals::printdata(os);
    os << getdurationofthepregnancy() << std::endl;
    os << getnumofbrn() << std::endl;
    return os;

}
#endif