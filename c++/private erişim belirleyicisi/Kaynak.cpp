#include<iostream>
using namespace std;

class Employee {
private:
	string name;//private sadece classýn içinde çaðýrýlabilir ve deðerlerin deðiþtirilmemesini saðlar
	int age;
public:
	
	void setAge(int yas) {
		if (yas < 0) {
			cout << "Boyle bir deger giremezsiniz..." << endl;//eksili deger girilmemesini saglar.
		}
		else {
			age = yas;
		}
	}
	int getAge() {
		return age;
	}
	void setname(string isim) {
		name = isim;
	}
	string getname() {
		return name;
	}
};


int main() {

	Employee employee;

	employee.setname("Berke");
	employee.setAge(18);

	cout << employee.getAge() << endl;
	cout << employee.getname() << endl;

	return 0;
}