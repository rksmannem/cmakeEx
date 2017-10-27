#include <iostream>
#include <iomanip>
#include "../include/student.h"


student::student(std::string name, int age, int id):
	sName(name),
	sAge(age),
	sId(id)
{
	std::cout<<__PRETTY_FUNCTION__<<std::endl;
}

void student::display() const
{
	std::cout<<std::endl;
	std::cout<<std::setw(6)<<"SID"<<std::setw(10)<<"SNAME"<<std::setw(6)<<"SAGE"<<std::endl;
	std::cout<<"   -------------------   "<<std::endl;
	std::cout<<std::setw(6)<<sId<<std::setw(10)<<sName<<std::setw(6)<<sAge<<std::endl;
}
