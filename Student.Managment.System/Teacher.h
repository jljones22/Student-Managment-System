#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include "Student.h"

class Teacher : public Person
{
public:
	Teacher(std::string_view firstName, std::string_view lastName,
		char middleInital, int age, char gender)
		: Person{ firstName, lastName, middleInital, age, gender }
	{
	}

	void print() const override;
};

#endif