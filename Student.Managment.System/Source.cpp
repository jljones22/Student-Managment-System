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
#include <vector>
#include <iostream>

#include "Person.h"

struct Course
{
	enum Subjects
	{
		math,
		science,
		history,
		geography,
		english,
		music,
		art,
		biology,
		physical_education,
		chemistry,
		physics,
		social_studies,

		max_subjects,
	};

	Subjects subject{};
	std::string courseName{};
};

class Student : public Person // derived class
{
protected:
	enum Classification
	{
		freshman,
		sophomore,
		junior,
		senior,
	};

	Student(std::string_view firstName, std::string_view lastName,
		char middleInital, int age, char gender)
		: Person{ firstName, lastName, middleInital, age, gender }
	{
	}

	void print() const override
	{
		std::cout << *this;
		for (const auto& course : m_courses)
		{
			std::cout << course.subject << " : " << course.courseName << "\n";
		}
		std::cout << "Student Classification: " << m_year
			<< "\n"; // << "Overall GPA: " << m_gpa << "\n";
	}
	
	// bool hasHonors() { return m_gpa >= 3.5; }

	// std::vector<Course>& getCourses() { return m_courses; }
	// double getGPA() const { return m_gpa; }
	// Classification& getClassification() { return m_year; }

	friend class Teacher;

private:
	std::vector<Course> m_courses{};
	// double m_gpa{};
	Classification m_year{};
};

class Teacher : public Person
{
public:
	Teacher(std::string_view firstName = "", std::string_view lastName = "",
		char middleInital = 'X', int age = 0, char gender = 'M', double salary = 0)
		: Person{ firstName, lastName, middleInital, age, gender }
	{
	}

	void setTasks()
	{

	}

	void gradeStudent()
	{

	}

	void modifyDetails()
	{

	}

	void print() const override
	{
		std::cout << *this;
		for (auto& student : m_students)
		{
			std::cout << student;
		}
	}


private:
	std::vector<Student> m_students{};
	Course m_course{};
	// double m_salary{};
};

int main()
{
	// Student person{ "Johnie", "Jones", 'L', 21, 'M', {} };

	//Teacher teacher{};
	//Person* derevied = &teacher;

	//std::cout << person;
	//person.print();
}