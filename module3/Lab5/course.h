#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
	public:
		// constructors
		Course();
		Course(string name, string sem);
		Course(const Course& obj);
		
		// operators
		Course& operator=(const Course& obj) {
			if (this != &obj) {
				delete courseName;
				courseName = new string;
				*courseName = obj.getCourseName();
				delete semester;
				semester = new string;
				*semester = obj.getSemester();
			}
			return *this;
		}
		
		// mutators
		void setCourseName(string name);
		void setSemester(string sem);
		
		// accessors
		string getCourseName() const;
		string getSemester() const;
		
		// destructors
		~Course();
		
	private:
		string* courseName;
		string* semester;
};

#endif
