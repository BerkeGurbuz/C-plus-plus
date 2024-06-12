#include<iostream>
using namespace std;


void printarray(const int* ptr1, const int* ptr2) {

	for (; ptr1 != ptr2; ptr1++) {

		cout << "eleman: " << *ptr1 << endl;
	}

}



int main() {

	/*const int a = 10;
	//const kullandýðýmýz için a'yý bir daha deðiþtiremeyiz.
	a = 10*/


	/*const int array[] = {10,20,30,40,50};
	//bu durum array için de geçerlidir.
	array[2] = 60;*/

	int array[] = { 1,2,3,4,5,6,7,8,9,10 };

	printarray(array + 2, array + 6);



	return 0;
}