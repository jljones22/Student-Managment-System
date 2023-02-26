#include "Student.h"

void Student::print() const
{
	std::cout << *this;
	std::cout << "Student Classification: " << m_year << "\n";
}

void Student::setClassification(Classification year)
{
	m_year = year;
}