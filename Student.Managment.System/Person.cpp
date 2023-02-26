#include "Person.h"

std::ostream& operator<<(std::ostream& ostr, const Person& person)
{
	ostr << "Name: " << person.m_firstName << " " << person.m_middleInital <<
		" " << person.m_lastName << "\n" << "Age: " << person.m_age <<
		"\n" << "Gender: " << person.m_sex << "\n";

	return ostr;
}

std::istream& operator>>(std::istream& istr, Person& person)
{
	istr >> person.m_firstName;
	istr >> person.m_middleInital;
	istr >> person.m_lastName;
	istr >> person.m_age;
	istr >> person.m_sex;

	return istr;
}