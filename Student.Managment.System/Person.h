#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person // base class
{
protected:
	Person(std::string_view firstName, std::string_view lastName,
		char middleInital, int age, char sex) noexcept
		: m_firstName{ firstName }, m_lastName{ lastName },
		m_middleInital{ middleInital }, m_sex{ sex }, m_age{ age }
	{
	}
	
public:
	virtual ~Person() = default;

	std::string_view getFirstName() const { return m_firstName; }
	std::string_view getLastName() const { return m_lastName; }
	char getMiddleInital() const { return m_middleInital; }
	char getSex() const { return m_sex; }
	int getAge() const { return m_age; }

	virtual void print() const { std::cout << *this; }

	friend std::ostream& operator<<(std::ostream& ostr, const Person& person);
	friend std::istream& operator>>(std::istream& istr, Person& person);

private:
	std::string m_firstName{ "NULL" };
	std::string m_lastName{ "NULL" };
	char m_middleInital{ 'X' };
	char m_sex{ 'X' };
	int m_age{ -1 };
};

#endif