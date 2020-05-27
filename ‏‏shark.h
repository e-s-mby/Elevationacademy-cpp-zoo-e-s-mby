#ifndef  __SHARK_H__
#define __SHARK_H__

#pragma once
#include "SeaCreatures.h"
class Shark :
    public SeaCreatures
{
public:
    Shark(const std::string& name);
	/*virtual*/ std::string getspecies()const;
	/*virtual*/  unsigned int getlifeExpectancy()const;
	/*virtual*/  std::vector<enumCon> getcontinent()const;
	/*virtual*/  std::vector<enumFood> gettypesoffood()const;
	/*virtual*/  short int getspeed()const;
	/*virtual*/  short int getlowestdepth() const;
	/*virtual*/ std::ostream& printdata(std::ostream& os)const;
private:
	static const short int m_lowestdepth;
	static const std::string m_species;
	static const unsigned int m_lifeExpectancy;
	static const std::vector<enumCon> m_continent;
	static const std::vector<enumFood> m_typesoffood;
	static const short int m_speed;
};
inline Shark::Shark(const std::string& name) :SeaCreatures(name)
{
}
inline std::string Shark::getspecies()const {
	return m_species;
}
inline  unsigned int Shark::getlifeExpectancy() const {
	return m_lifeExpectancy;
}
inline  std::vector<enumCon> Shark::getcontinent() const {
	return m_continent;
}
inline  std::vector<enumFood>Shark::gettypesoffood() const {
	return m_typesoffood;
}
inline  short int Shark::getspeed()const {
	return m_speed;
}
inline short int Shark::getlowestdepth()const {
	return m_lowestdepth;
}
inline std::ostream& Shark::printdata(std::ostream& os) const {
	SeaCreatures::printdata(os);
	return os;
}
#endif