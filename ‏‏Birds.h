#ifndef __BIRDS_H__
#define __BIRDS_H__

#pragma once
#include "Animals.h"
class Birds :
    public Animals
{
public:
    Birds(const std::string& name);
    virtual ~Birds();
    virtual std::ostream& printdata(std::ostream& os)const;
    virtual short int getheight() const = 0;
    virtual short int getwingspan() const = 0;
private:

};

inline Birds::Birds(const std::string& name):Animals(name){
}
inline Birds::~Birds() {}
inline std::ostream& Birds::printdata(std::ostream& os)const {
    Animals::printdata(os);
    os << getheight() << std::endl;
    os << getwingspan() << std::endl;
    return os;

}
#endif