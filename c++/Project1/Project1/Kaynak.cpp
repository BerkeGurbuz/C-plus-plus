#include <iostream>

using namespace std;

void factorial(int sayi) {     //fonksiyon.

	int faktoriyel = 1;

	for (int i = 2; i <= sayi; i++) {

		faktoriyel *= i;

	}
	cout << "faktöriyel:" << faktoriyel << endl;
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

		 a--; a'yý 1 azaltýr
			a++; a'yý bir artýrýr
			a = a + 3;  ve a += 3; ayný iþlevi görür
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

	cout << "Hesap Makinesi programýna Hosgeldiniz" << endl;

	cout << "1. islem:toplama islemi" << endl;
	cout << "2. islem:cýkarma islemi" << endl;
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

     string sys_kullanýcýadý = "berke_gurbuz";
	 string sys_password = "123456";

	 string kullanýcýadý;
	 string password;

	     cout << "kullanýcý adý:";
	     cin >> kullanýcýadý,

		 cout << "sifre:";
		 cin >> password;

		 if (sys_kullanýcýadý == kullanýcýadý && sys_password == password) {
			 cout << "Hosgeldiniz..";
		 }

		 else if (sys_kullanýcýadý != kullanýcýadý && sys_password == password) {
			 cout << "Kullanýcý Adý Hatalý...";
		 }

		 else if (sys_kullanýcýadý == kullanýcýadý && sys_password != password) {
			 cout << "Sifre Hatalý...";
		 }

		 else {
			 cout << "Kullanýcý Adý ve Sifre Hatalý....";                              

		 }
         
         int i = 0;
		 int j = 0;


		 while (i < 20 && j < 10 ) {
			 cout << " i : " << i <<" j : " << j << endl;
			 i++;
			 j++;
		 }


		 //&& : ve operatörü          
		  

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
		 cout << "Parolanýzý Giriniz: ";
		 cin >> input;
		 
		 if (input != parola) {
			 cout << "Parolanýz Yanlýs...." << endl;
		 }
	 } 
	 while (input != parola); input != parola olmasýnýn nedeni yanlýþ girdiðinde baþa atmak için
	 cout << "Parola Dogru....";
	 // sifre yanlýs yazýldýgýnda tekrar yazýlmasýný saglar. 

     int sayi;

     cout << "Sayý: ";
     cin >> sayi;

	 int faktoriyel = 1;

	 for (int i = 1; i <= sayi; i++) {  // forun içine int girdiðimizde o int sadece for'da tanýmlý oluyor
		 faktoriyel *= i;
		 cout << faktoriyel << endl;
	 }

	 cout << "faktöriyel : " << faktoriyel << endl;

     string sys_username = "berke_gurbuz";
     string sys_password = "123456";

	 string username;
	 string password;

	 while (true) {
		 cout << "Kullanýcý Adý:";
		 cin >> username;
		 cout << "Sifre:";
		 cin >> password;

		 if (sys_username == username && sys_password == password) {
			 cout << "Hosgeldin, " << username << endl;
			 break;
		 }
		 else if (sys_username != username && sys_password == password) {
			 cout << "Kullanýcý Adý Yanlis.." << endl;
		 }
		 else if (sys_username == username && sys_password != password) {
			 cout << "Sifre Yanlis.." << endl;
		 }
		 else {
			 cout << "Kullanýcý Adý ve Sifre Yanlýs.." << endl;       break: iþlemi durdurmaya yarar
			                                                          continue: continue nun altýndaki komutlarý çalýþtýrmadan baþa döner
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

	 cout << "sayýyý giriniz:";
	 cin >> sayi;

	 factorial(sayi);  //fonksiyon çaðýrýcý.*/
	 









		return 0;

}