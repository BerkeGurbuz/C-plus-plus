#include<iostream>
using namespace std;

struct Adress {

	string cityname;
	int no;

};

struct employee {

	int id;
	string name;
	string department;
	Adress* adress;
};


int main() {

	//employee employee = { 15,"Berke","Bili�im",{"Samsun",6} }; //bu �ekilde i� i�e yap�lar� tan�mlayabilirsin.

	/*
	employee.id = 15;
	employee.name = "Berke";
	employee.department = "Bili�im";
	
	employee.adress={"Samsun",6};
	employee.adress.cityname = "Samsun"; //bu sekilde de i� i�e yap�lar� tan�mlayabilirsin.
	employee.adress.no = 6;*/

	employee employee;
	employee.id = 15;
	employee.name = "Berke";
	employee.department = "Bili�im";

	Adress address = { "Samsun",6 };

	employee.adress = &address;

	employee* ptr = &employee;//hata olmamal�???

	cout << ptr->adress->cityname << endl;
	cout << ptr->adress->no << endl;


	cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.department << endl; 
	



	return 0;
}