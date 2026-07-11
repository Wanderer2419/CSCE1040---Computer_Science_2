#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	// TODO: Declare private data members
	private:
		string instructorName;
		string location;
		string classTime;
		
	public:
	// TODO: Declare mutator functions -
	//      SetInstructorName(), SetLocation(), SetClassTime()
		void SetInstructorName(string name);
		void SetLocation(string loc);
		void SetClassTime(string time);
		
	// TODO: Declare accessor functions -
	//      GetInstructorName(), GetLocation(), GetClassTime()
		string GetInstructorName() const;
		string GetLocation() const;
		string GetClassTime() const;
};

#endif
