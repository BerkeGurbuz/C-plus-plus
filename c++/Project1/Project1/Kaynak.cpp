#include <iostream>

using namespace std;

void factorial(int sayi) {     //fonksiyon.

	int faktoriyel = 1;

	for (int i = 2; i <= sayi; i++) {

		faktoriyel *= i;

	}
	cout << "fakt�riyel:" << faktoriyel << endl;
}

int main() {
	/*
	int a = 31;
	float b = 3.76;
	double c = 5.7543;
	char d = 'A';
	bool e = true;


	cout <<" a degiskeninin degeri:" << a << endl;
	cout << " b degiskeninin degeri:" << b << endl;
	cout << " c degiskeninin degeri:" << c << endl;
	cout << " d degiskeninin degeri:" << d << endl;
	cout << " e degiskeninin degeri:" << e << endl;

	int a, b, c, toplam = 0;

	a = 3;
	b = 5;
	c = 8;

	toplam = a + b + c;
	
	cout << "toplam:" << toplam << endl;

	    int Sayi1 = 5;
		int Sayi2 = 8;

	cout << "Sayi1 + Sayi2:" << Sayi1 + Sayi2 << endl;
	cout << "Sayi1 - Sayi2:" << Sayi1 - Sayi2 << endl;
	cout << "Sayi1 * Sayi2:" << Sayi1 * Sayi2 << endl;
	cout << "Sayi1 / Sayi2: "<< Sayi1 / Sayi2 << endl;


	int a = 6;

	

		cout << "a'nin degeri:" << a << endl;


		   a = a + 3

		cout << "a'nin yeni degeri:" << a << endl;

		 a--; a'y� 1 azalt�r
			a++; a'y� bir art�r�r
			a = a + 3;  ve a += 3; ayn� i�levi g�r�r
			a = a / 3;  ve a /= 3;
					  -
					  *   

	  int x;

	  cout << "Bir sayi giriniz:";
	  cin >> x;

	  cout << "girdiginiz sayi:" << x << endl; 


	int a, b, c;

	    cout << "Birinci Sayiyi Giriniz:";
	    cin >> a;

	    cout << "Ikinci Sayiyi Giriniz:";
		cin >> b;

		cout << "Ucuncu Sayiyi Giriniz:";
		cin >> c;

		cout << "Sayilarin toplami:" << a + b + c << endl; 


	string str1 = "Bu bir stringtir.";

	string str2 = "Bu da bir stringtir.";

	string str3 = str1 + str2;

	cout << "str1:" << str1 << endl;
	cout << "str2:" << str2 << endl;

	cout << "str3:" << str3 << endl; 

	string password = "Samsun";

	string input;

	cout << "Lutfen parolayi giriniz:";
	cin >> input;

	if (password == input) {
		cout << "Parolayi Dogru Girdiniz";
	}

	else {
		cout << "Parolayi Yanlis Girdiniz";
	}

	int a,b;
	string islem;

	cout << "Hesap Makinesi program�na Hosgeldiniz" << endl;

	cout << "1. islem:toplama islemi" << endl;
	cout << "2. islem:c�karma islemi" << endl;
	cout << "3. islem:carpma islemi" << endl;
	cout << "4. islem:bolme islemi" << endl;

	cout << "islemi yaziniz:";
	cin >> islem;

	if (islem == "1") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "sonuc:" << a + b << endl;
	}
	else if (islem == "2") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "sonuc:" << a - b << endl;
	}
	else if (islem == "3") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "sonuc:" << a * b << endl;
	}
	else if (islem == "4") {
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "sonuc:" << a / b << endl;
	}
	else {
		cout << "Islem Gecersiz..." << endl;
     }

     string sys_kullan�c�ad� = "berke_gurbuz";
	 string sys_password = "123456";

	 string kullan�c�ad�;
	 string password;

	     cout << "kullan�c� ad�:";
	     cin >> kullan�c�ad�,

		 cout << "sifre:";
		 cin >> password;

		 if (sys_kullan�c�ad� == kullan�c�ad� && sys_password == password) {
			 cout << "Hosgeldiniz..";
		 }

		 else if (sys_kullan�c�ad� != kullan�c�ad� && sys_password == password) {
			 cout << "Kullan�c� Ad� Hatal�...";
		 }

		 else if (sys_kullan�c�ad� == kullan�c�ad� && sys_password != password) {
			 cout << "Sifre Hatal�...";
		 }

		 else {
			 cout << "Kullan�c� Ad� ve Sifre Hatal�....";                              

		 }
         
         int i = 0;
		 int j = 0;


		 while (i < 20 && j < 10 ) {
			 cout << " i : " << i <<" j : " << j << endl;
			 i++;
			 j++;
		 }


		 //&& : ve operat�r�          
		  

        int a, b;
		a = 3;
		b = 5;
		bool result;


		    result = (3 == 5);
			cout << " 3 = 5 is " << result << endl;
		
			result = (3 != 5);
			cout << " 3 != 5 is " << result << endl;
		
			result = (3 < 5);
			cout << " 3 < 5 is " << result << endl;
		
			result = (3 > 5);
			cout << " 3 > 5 is " << result << endl;

			result = (3 <= 5);
			cout << " 3 <= 5 is " << result << endl;

			result = (3 >= 5);
			cout << " 3 >= 5 is " << result << endl;

     string parola = "123456";
	 string input;

	 do {
		 cout << "Parolan�z� Giriniz: ";
		 cin >> input;
		 
		 if (input != parola) {
			 cout << "Parolan�z Yanl�s...." << endl;
		 }
	 } 
	 while (input != parola); input != parola olmas�n�n nedeni yanl�� girdi�inde ba�a atmak i�in
	 cout << "Parola Dogru....";
	 // sifre yanl�s yaz�ld�g�nda tekrar yaz�lmas�n� saglar. 

     int sayi;

     cout << "Say�: ";
     cin >> sayi;

	 int faktoriyel = 1;

	 for (int i = 1; i <= sayi; i++) {  // forun i�ine int girdi�imizde o int sadece for'da tan�ml� oluyor
		 faktoriyel *= i;
		 cout << faktoriyel << endl;
	 }

	 cout << "fakt�riyel : " << faktoriyel << endl;

     string sys_username = "berke_gurbuz";
     string sys_password = "123456";

	 string username;
	 string password;

	 while (true) {
		 cout << "Kullan�c� Ad�:";
		 cin >> username;
		 cout << "Sifre:";
		 cin >> password;

		 if (sys_username == username && sys_password == password) {
			 cout << "Hosgeldin, " << username << endl;
			 break;
		 }
		 else if (sys_username != username && sys_password == password) {
			 cout << "Kullan�c� Ad� Yanlis.." << endl;
		 }
		 else if (sys_username == username && sys_password != password) {
			 cout << "Sifre Yanlis.." << endl;
		 }
		 else {
			 cout << "Kullan�c� Ad� ve Sifre Yanl�s.." << endl;       break: i�lemi durdurmaya yarar
			                                                          continue: continue nun alt�ndaki komutlar� �al��t�rmadan ba�a d�ner
		 }
	 }
     int array[] = { 10,20,30,40 };
	 

	 for (int i = 0; i < 4; i++) {
		 cout << i << ".array:" << array[i] << endl;
	 }
     string array[3];

     for (int i = 0; i < 3; i++) {
		 cin >> array[i];
	 }
	 for (int i = 0; i < 3; i++) {
		 cout << i << ".index" << array[i] << endl;
	 }

     int matris[3][3];


	 cout << "Matris girin:" << endl;
	  for (int i = 0; i < 3; i++) {
		  for (int j = 0; j < 3; j++) {
			  cin >> matris[i][j];
		  }
	  }

	  cout << "Matris:" << endl;

	  for (int i = 0; i < 3; i++) {
		  for (int j = 0; j < 3; j++) {
			  cout << matris[i][j]<<" ";
		  }
		  cout << endl;
	  }

     int islem;

	 cout << "islemi giriniz:";
	 cin >> islem;

	 switch (islem) {

	 case 1:
		 cout << "1.islemi sectiniz...";
		 break;
	 case 2:
		 cout << "2.islemi sectiniz...";
		 break;
      case 3:
		 cout << "3.islemi sectiniz...";
		 break;
	 case 4:
		 cout << "4.islemi sectiniz...";
		 break;
	 default:
		 cout << "gecersiz islem...." << endl;
	 }
	 
     int sayi;

	 cout << "say�y� giriniz:";
	 cin >> sayi;

	 factorial(sayi);  //fonksiyon �a��r�c�.*/
	 









		return 0;

}