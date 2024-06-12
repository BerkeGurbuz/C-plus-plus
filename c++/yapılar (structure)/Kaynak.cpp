#include<iostream>
using namespace std;

struct employee {
	int id;
	string name;   //obje olustu 
	string department;

};

void showemployee(employee employee) {

	employee.id = 20;//pointer kullanmadan objenin degerini bir fonksiyonda degiþtiremezsin
	cout << "Id:" << employee.id << endl;
	cout << "Ýsim:" << employee.name << endl;
	cout << "Departman:" << employee.department << endl;
}

void show(employee* employee) {

	employee->id = 20;//ama ptr kullanarak degiþtirebilirsin
	cout << "Id:" << employee->id << endl;
	cout << "Ýsim:" << employee->name << endl;
	cout << "Departman:" << employee->department << endl;

}


int main() {

	employee employee1 = { 15,"Berke","Bilisim" };//id name department tanýmlandý

	/*showemployee(employee1);
	cout << employe.id << endl;*/

	show(&employee1);
	cout << employee1.id << endl;

	
	
	
	/*employee1.id = 15;
	employee1.name = "Berke"; //bu sekilde de tanýmlanabilir.
	employee1.department = "Bilisim";


	employee* ptr = &employee1;

	cout << ptr->department << endl;

    employee1. id = 12;// bu sekilde degistirilebilir
	
	cout << employee1.id << endl;//objenin id sini yazar */






	return 0;
}