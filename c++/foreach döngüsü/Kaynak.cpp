#include<iostream>
using namespace std;
int main() {

	int a[] = { 10,20,30,40,50 };

	/*for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}*/

	for (int item : a) {
		cout << 2*item << endl;//bu şekilde de arrayleri yazdırabilirsin.
	}          




	return 0;
}