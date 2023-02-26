#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"

class Student : public Person // derived class
{
public:
	Student(std::string_view firstName, std::string_view lastName,
		char middleInital, char sex, int age) noexcept
		: Person{ firstName, lastName, middleInital, sex, age, }
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
	void setClassification(Classification year);
	Classification& getClassification() { return m_year; }

private:
	Classification m_year{};
};

#endif