#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <array>

class Course
{
public:
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
	std::array<std::string, 10> tasks{};
	// Teacher teacher{};
};

#endif
