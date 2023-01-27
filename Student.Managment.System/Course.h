#ifndef COURSE_H
#define COURSE_H

#include <string>

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

#endif
