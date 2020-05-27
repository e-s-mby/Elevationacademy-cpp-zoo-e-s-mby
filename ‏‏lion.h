#ifndef  __LION_H__
#define __LION_H__

#pragma once
#include "Mammals.h"
class Lion :
    public Mammals
{
public:
	Lion(const std::string& name);
	/*virtual*/ std::string getspecies()const;
	/*virtual*/ unsigned int getlifeExpectancy()const;
	/*virtual*/ std::vector<enumCon> getcontinent()const;
	/*virtual*/ std::vector<enumFood> gettypesoffood()const;
	/*virtual*/ short int getspeed()const;
	/*virtual*/ short int getdurationofthepregnancy()const;
	/*virtual*/ short int getnumofbrn()const;
	/*virtual*/ std::ostream& printdata(std::ostream& os)const;
private:
	static const std::string m_species;
	static const unsigned int m_lifeExpectancy;
	static const std::vector<enumCon> m_continent;
	static const std::vector<enumFood> m_typesoffood;
	static const short int m_speed;
	static const short int m_durationofthepregnancy;
	static const short int m_numofbrn;

};
inline Lion::Lion(const std::string& name):Mammals(name)
{
}

inline std::string Lion::getspecies()const {
	return m_species;
}
inline unsigned int Lion::getlifeExpectancy() const {
	return m_lifeExpectancy;
}
inline std::vector<enumCon> Lion::getcontinent() const {
	return m_continent;
}
inline  std::vector<enumFood>Lion::gettypesoffood() const {
	return m_typesoffood;
}
inline  short int Lion::getspeed()const {
	return m_speed;
}
inline  short int Lion::getdurationofthepregnancy()const {
	return m_durationofthepregnancy;
}
inline  short int Lion::getnumofbrn() const {
	return m_numofbrn;
}
inline std::ostream& Lion::printdata(std::ostream& os) const {
	Mammals::printdata(os);
	return os;
}
#endif