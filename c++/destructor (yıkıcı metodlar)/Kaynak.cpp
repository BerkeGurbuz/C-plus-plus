#include<iostream>
using namespace std;

class Employee {
public:
	Employee() {
		cout << "constructor �a��r�ld�" << endl;
	}
	
	~Employee() {
		cout << "destructor �a��r�ld�" << endl;
	}
};


int main() {

	Employee* emp = new Employee;

	delete emp;


	return 0;
}