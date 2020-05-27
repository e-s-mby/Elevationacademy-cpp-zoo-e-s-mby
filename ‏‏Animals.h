#ifndef __ANIMALS_H__
#define __ANIMALS_H__
#pragma once
#include <string>
#include <vector>
#include <iostream>
typedef enum enumCon
{
	E_AMERICA,
	E_ASIA,
	E_EUROPE,
	E_AUSTRALIA,
	E_ANTARTICA,
	E_AFRICA
}enumCon;
typedef enum enumFood
{
	E_MILK,
	E_MEET,
	E_GRASS,
	E_VEGTABLES,
	E_BIRDS,
	E_WORMS,
	E_FISH
}enumFood;
class Animals
{
public:
	Animals(const std::string& name);
	virtual ~Animals();
	std::string getname()const;
	virtual std::string getspecies()const=0;
	virtual unsigned int getlifeExpectancy()const=0;
	virtual std::vector <enumCon> getcontinent()const=0;
	virtual std::vector<enumFood> gettypesoffood()const=0;
	virtual short int getspeed()const=0;
	virtual std::ostream& printdata(std::ostream& os)const;
private:
	const std::string m_name;
};

inline Animals::Animals(const std::string& name):m_name(name){

}
inline Animals::~Animals(){}
inline std::string Animals::getname()const {
	return m_name;
}
inline std::ostream& Animals::printdata(std::ostream& os) const{
	std::vector <enumCon> tmp1 = getcontinent();
	std::vector<enumFood> tmp2 = gettypesoffood();
	os << getname() << std::endl;;
	os << getspecies() << std::endl;;
	os<< getlifeExpectancy() << std::endl;;
	for (std::vector <enumCon>::iterator it = tmp1.begin(); it != tmp1.end(); it++)
	{
		os<< *it;
	}
	for (std::vector <enumFood>::iterator it = tmp2.begin(); it != tmp2.end(); it++)
	{
		os << *it << std::endl;
	}
	os<< getspeed() << std::endl;
	return os;

}

inline std::ostream& operator<<(std::ostream& os, const Animals& animals) {
	animals.printdata(os);
	return os;
}


#endif