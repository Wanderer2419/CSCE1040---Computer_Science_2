#include "OfferedCourse.h"
//string instructorName;
//string location;
//string classTime;

// TODO: Define mutator functions -
//      SetInstructorName(), SetLocation(), SetClassTime()
void OfferedCourse::SetInstructorName(string name) {
	instructorName = name;
}
void OfferedCourse::SetLocation(string loc) {
	location = loc;
}
void OfferedCourse::SetClassTime(string time) {
	classTime = time;
}

// TODO: Define accessor functions -
//      GetInstructorName(), GetLocation(), GetClassTime()
string OfferedCourse::GetInstructorName() const {
	return instructorName;
}
string OfferedCourse::GetLocation() const {
	return location;
}
string OfferedCourse::GetClassTime() const {
	return classTime;
}
