#include<iostream>
using namespace std;

struct student {
	int id;
	char letter;


};

int main() {

	cout << "Integer: " << sizeof(int) << endl;//kaç byte yer kapladığını gösteririr
	cout << "Char: " << sizeof(char) << endl;
	cout << "Double: " << sizeof(double) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "String: " << sizeof(string) << endl;
	cout << "Student:" << sizeof(student) << endl;




	return 0;
}