#include<iostream>
using namespace std;

void degerdegistirme(int& ref) {

	ref = 15;

}



int main() {
	/*int a = 3;
	cout << "a'n�n degeri: " << a << endl;

	int& ref = a;
	ref++;

	cout << "a'n�n yeni degeri: " << a << endl;*/

	/*int a = 10;
	cout << "a'n�n degeri: " << a << endl;

	degerdegistirme(a);
	cout << "a'n�n yeni degeri: " << a << endl;*/

	/*int a = 10;

	int& ref;   //ref int k�sm�nda tan�mlanmal�.

	ref = a;*/

	int a = 10;
	int* ptr;
	ptr = &a;    // ama pointerlarda int k�sm�ndan farkl� biyerde tan�mlanabilir
	cout << "a'n�n degeri:" << *ptr << endl;

	

	return 0;
}