#ifndef __SEACRETURES_H__
#define __SEACRETURES_H__
#pragma once
#include "Animals.h"
class SeaCreatures :
    public Animals
{
public:
    SeaCreatures(const std::string& name);
    virtual ~SeaCreatures();
 
    std::ostream& printdata(std::ostream& os)const;
    virtual short int getlowestdepth() const = 0;
    
private:
   
};

inline SeaCreatures::SeaCreatures(const std::string& name) :Animals(name)
{
}
inline SeaCreatures::~SeaCreatures() {}
inline std::ostream& SeaCreatures::printdata(std::ostream& os)const {
    Animals::printdata(os);
    os<< getlowestdepth() << std::endl;
    return os;

}
#endif