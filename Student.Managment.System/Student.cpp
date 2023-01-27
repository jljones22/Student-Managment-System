#include "Student.h"

void Student::print() const
{
	std::cout << *this;
	std::cout << "Student Classification: " << m_year << "\n";
	for (const auto& course : m_courses)
	{
		std::cout << course.subject << " : " << course.courseName << "\n";
	}
}