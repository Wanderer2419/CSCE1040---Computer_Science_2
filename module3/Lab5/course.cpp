#include "Course.h"

// constructors
Course::Course() {
	courseName = new string;
	*courseName = "none";
	semester = new string;
	*semester = "none";
};
Course::Course(string name, string sem) {
	courseName = new string;
	*courseName = name;
	semester = new string;
	*semester = sem;
};
Course::Course(const Course& obj) {
	courseName = new string;
	*courseName = obj.getCourseName();
	semester = new string;
	*semester = obj.getSemester();
};

// mutators
void Course::setCourseName(string name) { *courseName = name; };
void Course::setSemester(string sem) { *semester = sem; };

// accessors
string Course::getCourseName() const { return *courseName; };
string Course::getSemester() const { return *semester; };

// destructors
Course::~Course() {
	delete courseName;
	delete semester;
}
