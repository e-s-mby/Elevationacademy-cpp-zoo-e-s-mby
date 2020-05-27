#ifndef __OWL_H__
#define __OWL_H__
#pragma once
#include "Birds.h"
class Owl :
    public Birds
{
public:
	Owl(const std::string& name);
	/*virtual*/  std::string getspecies()const;
	/*virtual*/  unsigned int getlifeExpectancy()const;
	/*virtual*/  std::vector<enumCon> getcontinent()const;
	/*virtual*/  std::vector<enumFood> gettypesoffood()const;
	/*virtual*/  short int getspeed()const;
	/*virtual*/  short int getheight() const;
	/*virtual*/  short int getwingspan() const;
	/*virtual*/ std::ostream& printdata(std::ostream& os)const;
private:

	static const std::string m_species;
	static const unsigned int m_lifeExpectancy;
	static const std::vector<enumCon> m_continent;
	static const std::vector<enumFood> m_typesoffood;
	static const short int m_speed;
	static const short int m_height;
	static const short int m_wingspan;
};
inline Owl::Owl(const std::string& name):Birds(name)
{
}

inline  std::string Owl::getspecies()const {
	return m_species;
}
inline  unsigned int Owl::getlifeExpectancy() const {
	return m_lifeExpectancy;
}
inline  std::vector<enumCon> Owl::getcontinent() const {
	return m_continent;
}
inline  std::vector<enumFood>Owl::gettypesoffood() const {
	return m_typesoffood;
}
inline  short int Owl::getspeed()const {
	return m_speed;
}
inline  short int Owl::getheight()const {
	return m_height;
}
inline  short int Owl::getwingspan() const {
	return m_wingspan;
}
inline std::ostream& Owl::printdata(std::ostream& os) const {
	Birds::printdata(os);
	return os;
}

#endif