#include<iostream>
using namespace std;

void degerdegistirme(int& ref) {

	ref = 15;

}



int main() {
	/*int a = 3;
	cout << "a'nın degeri: " << a << endl;

	int& ref = a;
	ref++;

	cout << "a'nın yeni degeri: " << a << endl;*/

	/*int a = 10;
	cout << "a'nın degeri: " << a << endl;

	degerdegistirme(a);
	cout << "a'nın yeni degeri: " << a << endl;*/

	/*int a = 10;

	int& ref;   //ref int kısmında tanımlanmalı.

	ref = a;*/

	int a = 10;
	int* ptr;
	ptr = &a;    // ama pointerlarda int kısmından farklı biyerde tanımlanabilir
	cout << "a'nın degeri:" << *ptr << endl;

	

	return 0;
}