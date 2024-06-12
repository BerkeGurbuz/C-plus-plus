#include<iostream>
using namespace std;

class Employee {
public:
	Employee() {
		cout << "constructor çaðýrýldý" << endl;
	}
	
	~Employee() {
		cout << "destructor çaðýrýldý" << endl;
	}
};


int main() {

	Employee* emp = new Employee;

	delete emp;


	return 0;
}