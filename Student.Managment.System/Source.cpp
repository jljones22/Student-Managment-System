/*
This is one of the most popular C++ projects for beginners.
For this student management system, 
you will create a system where students can edit their details, 
and submit assignments and completed tests. 
At the same time, 
the teachers will use it to set tasks, 
grade students, and add or change details.
*/

#include <string>
#include <iostream>
#include <exception>

#include "Person.h"
#include "Student.h"


class Teacher : public Person
{
public:
	Teacher(std::string_view firstName, std::string_view lastName,
		char middleInital, int age, char gender, double salary)
		: Person{ firstName, lastName, middleInital, age, gender }
	{
	}

	void setTasks()
	{

	}

	void modifyDetails()
	{

	}

	void print() const override
	{
		std::cout << *this;
	}

private:
	//std::array<Student, 21> m_students{};
	Course m_course{};
	// double m_salary{};
};

int main()
{
	try
	{
		//Student person{ "Johnie", "Jones", 'L', 21, 'M', {} };

		//Teacher teacher{};
		//Person* derevied = &teacher;

		//std::cout << person;
		//person.print();
	}
	catch (const std::exception& exception)
	{
		std::cerr << "Standard exception: " << exception.what() << '\n';
	}

	return 0;
}