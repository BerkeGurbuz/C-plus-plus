#include<iostream>
using namespace std;

int toplama(int a, int b, int c) {

	return a + b + c;
	cout << "DENEME" << endl; // returnden sonra yaz�lan �eyler g�r�nmez


}

int main() {

	int a = toplama(1, 2, 3);

	cout << "Toplam: " << a << endl;
	
}