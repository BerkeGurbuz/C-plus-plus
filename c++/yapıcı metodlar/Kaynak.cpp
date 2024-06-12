#include<iostream>
using namespace std;

class Employee {
private:
	string name;
	int salary;
	int id;

public:
	Employee() {
		this->name = "Bilgi Yok..";
		this->salary = 0;
		this->id = 0;
	}
	Employee(string name, int salary) {//overloading
		this->name = name;
		this->salary = salary;
		this->id = 0;
	}
	Employee(string name, int salary, int id) {  //constructor
		this->name = name; //this pointer ayný kelimelerden karýsýklýk cýkmasýný önler.
		this->salary = salary;
		this->id = id;
	}
	void Setid(int id) {
		this->id = id;
	}
	int Getid() {
		return id;
	}
	void Setname(string name) {
		this->name = name;
	}
	string Getname() {
		return name;
	}
	void Setsalary(int salary) {
		this->salary = salary;
	}
	int Getsalary() {
		return salary;
	}
	void Showinfos() {
		cout << "Ýsim: " << this->name << endl;
		cout << "Maaþ: " << this->salary << endl;
		cout << "Ýd: " << this->id << endl;
	}



};


int main() {

	Employee employee1("Berke", 5000, 15);
	Employee employee2("Ahmet", 4000);
	Employee employee3;//default oldugu için paranteze gerek yok
	Employee employee4;//const tanýmlamasakta c++ deafult bir const tanýmlýyor


	employee1.Showinfos();
	
	employee2.Showinfos();

	employee3.Showinfos();

	employee4.Showinfos();


	return 0;
}