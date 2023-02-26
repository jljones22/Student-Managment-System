/*
This is one of the most popular C++ projects for beginners.
For this student management system, 
you will create a system where students can edit their details, 
and submit assignments and completed tests. 
At the same time, 
the teachers will use it to set tasks, 
grade students, and add or change details.
*/

#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main(int argc, char* argv[])
{
	try
	{
		Teacher frank{ "Frank", "Baile", 'B', 32, 'M' };

		Student john{ "John", "Bob", 'A', 22, 'M' };

		Person* derived[] = { &frank, &john };

		for (const auto& i : derived)
		{
			std::cout << *i << '\n';
		}
	}
	catch (const std::exception& exception)
	{
		std::cerr << "Standard exception: " << exception.what() << '\n';
	}

	return 0;
}