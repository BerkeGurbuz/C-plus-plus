#include<iostream>
using namespace std;

class student {   //classtan yararlan�larak istenilen kadar nesne olu�turulabilir.
public:
	string name;

	void tellname() {
		cout << "Benim adim " << name << endl;
	}


};

int main() {

	student student1;
	student student2;

	student1.name = "Berke";
	student2.name = "Ahmet";

	student1.tellname();
	student2.tellname();

	


	return 0;
}