#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person // base class
{
protected:
	Person(std::string_view firstName, std::string_view lastName,
		char middleInital, int age, char gender)
		: m_firstName{ firstName }, m_lastName{ lastName },
		m_middleInital{ middleInital }, m_age{ age }, m_gender{ gender }
	{
	}

public:
	virtual ~Person() = default;

	std::string_view getFirstName() const { return m_firstName; }
	std::string_view getLastName() const { return m_lastName; }
	char getMiddleInital() const { return m_middleInital; }
	int getAge() const { return m_age; }
	char getGender() const { return m_gender; }

	virtual void print() const { std::cout << *this; }

	friend std::ostream& operator<<(std::ostream& ostr, const Person& person)
	{
		ostr << "Name: " << person.m_firstName << " " << person.m_middleInital <<
			" " << person.m_lastName << "\n" << "Age: " << person.m_age <<
			"\n" << "Gender: " << person.m_gender << "\n";

		return ostr;
	}

	friend std::istream& operator>>(std::istream& istr, Person& person)
	{
		istr >> person.m_firstName;
		istr >> person.m_middleInital;
		istr >> person.m_lastName;
		istr >> person.m_age;
		istr >> person.m_gender;

		return istr;
	}

private:
	std::string m_firstName{};
	std::string m_lastName{};
	char m_middleInital{};
	int m_age{};
	char m_gender{};
};

#endif