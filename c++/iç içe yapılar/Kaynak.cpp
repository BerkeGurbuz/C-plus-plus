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

	//employee employee = { 15,"Berke","Biliþim",{"Samsun",6} }; //bu þekilde iç içe yapýlarý tanýmlayabilirsin.

	/*
	employee.id = 15;
	employee.name = "Berke";
	employee.department = "Biliþim";
	
	employee.adress={"Samsun",6};
	employee.adress.cityname = "Samsun"; //bu sekilde de iç içe yapýlarý tanýmlayabilirsin.
	employee.adress.no = 6;*/

	employee employee;
	employee.id = 15;
	employee.name = "Berke";
	employee.department = "Biliþim";

	Adress address = { "Samsun",6 };

	employee.adress = &address;

	employee* ptr = &employee;//hata olmamalý???

	cout << ptr->adress->cityname << endl;
	cout << ptr->adress->no << endl;


	cout << employee.id << endl;
	cout << employee.name << endl;
	cout << employee.department << endl; 
	



	return 0;
}