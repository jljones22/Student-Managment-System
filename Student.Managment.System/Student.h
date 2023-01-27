#ifndef STUDENT_H
#define STUDENT_H

#include <array>

#include "Person.h"
#include "Course.h"

class Student : public Person // derived class
{
protected:
	Student(std::string_view firstName = "", std::string_view lastName = "",
		char middleInital = ' ', int age = 0, char gender = ' ')
		: Person{ firstName, lastName, middleInital, age, gender }
	{
	}

public:
	enum Classification
	{
		freshman,
		sophomore,
		junior,
		senior,
	};

	void print() const override;

	Classification& getClassification() { return m_year; }
	std::array<Course, 8>& getCourses() { return m_courses; }

private:
	Classification m_year{};
	std::array<Course, 8> m_courses{};
};

#endif