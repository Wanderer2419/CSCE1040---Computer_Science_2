// Employee class
#include <string>
using namespace std;

class Employee {
	public:
		// constructors
		Employee() { };
		Employee(const string& name) {
			_name = name;
		};
		// mutators & accessors
		string getName() { return _name; };
		void setName(string name) { _name = name; };
		int getSalaray() { return _salary; };
		void setSalary(int salaray) { _salary = salary; };
	private:
		string _name;
		int _salary;
};
