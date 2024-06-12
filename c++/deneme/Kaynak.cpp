#include<iostream>
#include<cmath>//matematik islemleri icin.
#include<ctype.h>
#include<algorithm>
using namespace std;
/* 
double topla(double s1, double s2) {
	return s1 + s2;
}
double cıkar(double s1, double s2) {
	return s1 - s2;
}
double carp(double s1, double s2) {
	return s1 * s2;
}
double bol(double s1, double s2) {
	return s1 / s2;
}

double cevre(double kısa, double uzun) {
	return (kısa + uzun) * 2;
}
double alan(double kısa, double uzun) {
	return kısa * uzun;
}

bool asal(int sayi) {

	int sayac = 0;
	for (int j = 2; j < sayi; j++) {

		if (sayi % j == 0) {
			sayac++;
			break;
		}
	}
	if (sayac == 0)
		return true;

	else
		return false;
}

double cevredaire(double yarıcap) {
	return 2 * 3.14 * yarıcap;
}
double alandaire(double yarıcap) {
	return 3.14 * yarıcap * yarıcap;
}

double prizmahacim(double a, double b, double h) {
	return a * b * h;

}
double silindirhacim(double r, double h) {
	return (3.14 * r * r) * h;
}*/
int dogaltoplam(int a) {
	if (a != 0) 
		return a + dogaltoplam(a - 1);
	return 0;
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
	/*int a = 1;

	while (a <= 5) {

		cout << "a: " << a << endl;
		a++;
	
	float yaz�l�1, yaz�l�2, ortalama;

	cout << "Yaz�l�1 giriniz : ";
	cin >> yaz�l�1;
	cout << "Yaz�l�2 giriniz : ";
	cin >> yaz�l�2;

	ortalama=(yaz�l�1 + yaz�l�2)/2;
	cout << "Ortalama : " << ortalama << endl;

	if (ortalama < 50) {
		cout << "Kald�n�z..." << endl;
	}
	else {
		cout << "Gectiniz!!!" << endl;
	}
	int puan;
	cout << "Puan�n�z� Giriniz : ";
	cin >> puan;
	
	if (puan > 100) {
		cout << "100den buyuk deger girmeyin" << endl;
	}
	else if ( puan >= 85) {
		cout << "A" << endl;
	}
	else if ( puan >= 75) {
		cout << "B" << endl;
	}
	else if ( puan >= 60) {
		cout << "C" << endl;
	}
	else if ( puan >= 45) {
		cout << "D" << endl;
	}
	else if ( puan >= 30) {
		cout << "E" << endl;
	}
	else if ( puan >= 0) {
		cout << "F" << endl;
	}
	else {
		cout << "0dan kucuk deger girdinz.." << endl;
	}

	int sayi;

	cout << "Say� Giriniz : ";
	cin >> sayi;

	if (sayi % 2 == 0) {
		cout << "Say� cifttir" << endl;
	}
	else {
		cout << "sayi tektir" << endl;
	}


	for (int i=1; i <= 100; i++ ) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}
	int toplam = 0;
	int sayi;

	for (int i = 1; i <= 5; i++) {

		cout << i << ".Say�y� Giriniz:";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << "toplam: " << toplam << endl;
	

	float toplam = 0;
	int sayi;
	for (int i = 1; i <= 10; i++) {
		cout << i << ".say�y� girniz:";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << "10 say�n�n ortalamas�: " << toplam / 10 << endl;

	int i, a, fak;
	cout << "say� giriniz: ";
	cin >> a;
	i = 1;
	fak = 1;
	while (i < a) {
		i++;
		fak = fak *= i;
	}
	cout << a << "'n�n fakt�riyeli: " << fak << endl;

    double sayi1, sayi2, sonuc;
	char islem;

	cout << "Birinci Say�y� Giriniz: ";
	cin >> sayi1;

	cout << "��lemi giriniz: ";
	cin >> islem;

	cout << "�kinci Say�y� Giriniz: ";
	cin >> sayi2;

	switch (islem) {
	case'+':
		sonuc = (sayi1 + sayi2) ;
		cout << "Sonu�: " << sonuc << endl;
		break;
	case'-':
		sonuc = (sayi1 - sayi2);
		cout << "Sonu�: " << sonuc << endl;
		break;
	case'*':
		sonuc = (sayi1 * sayi2);
		cout << "Sonu�: " << sonuc << endl;
		break;
	case'/':
		sonuc = (sayi1 / sayi2);
		cout << "Sonu�: " << sonuc << endl;
		break;
	}

    int sayi;
	int sayac = 0;

    cout << "Say� Giriniz: ";
	cin >> sayi;

	 for (int i= 2; i < sayi; i++) {
		if (sayi % i == 0) {
			sayac++;
			break;
		}
	}
	if (sayac == 0) {
		cout << "SAYI ASALDIR...." << endl;
	}
	else {
		cout << "SAYI ASAL DEG�LD�R..." << endl;
	}


    int x, y, alan, cevre;
    cout << "k�sa kenar� giriniz: ";
	cin >> x;
	cout << "uzun kenar� giriniz: ";
	cin >> y;

	cevre = (x + y) * 2;
	alan = x * y;

	cout << "Dikd�rtgenin Alan�: " << alan << endl;
	cout << "Dikd�rtgenin Cevresi: " << cevre << endl;

    int a, b, c;

	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	if (a < (b, c)) {
		cout << "en kucuk say�: " << a << endl;
	}
	else if (b < (a, c)) {
		cout << "en kucuk say�: " << b << endl;
	}
	else if (c < (a, b)) {
		cout << "en kucuk say�: " << c << endl;
	}
	else {
		cout << "Say�lar birbirine e�ittir.." << endl;
	}

    int r;
    float alan, hacim;
	cout << "k�renin yar��ap�n� yaz�n�z: ";
	cin >> r;

	alan = 4 * 3.14 * r * r;
	hacim = (4 * 3.14 * r * r * r) / 3;

	cout << "k�renin alan�: " << alan << endl;
	cout << "k�renin hacmi: " << hacim << endl;

    int a, b, hipo;
	cout << "1.kenar� giriniz: ";
	cin >> a;
	cout << "2.kenar� giriniz: ";
	cin >> b;

	hipo = hypot(a, b);//hipoten�s i�lemini yapar.

	cout << "��genin hipoten�s�: " << hipo << endl;


    double fiyat, kdv_fiyat;

    cout << "Fiyat� girin: ";
	cin >> fiyat;

	kdv_fiyat = fiyat + (fiyat * 18 / 100);
	cout << "KDV'li fiyat: " << kdv_fiyat << endl;


    int sayi;
    cout << "Say� giriniz: ";
	cin >> sayi;

	for (int i=1; i <= sayi; i++) {

		if (i % 2 != 0) {
			cout << i << endl;
		}

	}

    double sayi1, sayi2;

	cout << "Birinci say�y� giriniz: ";
	cin >> sayi1;
	cout << "�kinci say�y� giriniz: ";
	cin >> sayi2;

	cout << "Toplamlar�: " << topla(sayi1, sayi2) << endl;
	cout << "Farklar�: " << c�kar(sayi1, sayi2) << endl;
	cout << "�arp�mlar�: " << carp(sayi1, sayi2) << endl;
	cout << "B�l�mleri: " << bol(sayi1, sayi2) << endl;
	
    double k�sak, uzunk;
	cout << "K�sa kenar� giriniz: ";
	cin >> k�sak;
	cout << "Uzun kenar� giriniz: ";
	cin >> uzunk;

	cout << "�evresi: " << cevre(k�sak, uzunk) << endl;
	cout << "Alan�: " << alan(k�sak, uzunk) << endl;

    int say�;
	cout << "Say� giriniz: ";
	cin >> say�;

	if (asal(say�)) {
		cout << "Girilen Say� Asald�r.." << endl;
	}
	else {
		cout << "Giriken Say� Asal De�ildir.." << endl;
	}

    double r;

	cout << "Yar��ap� Giriniz: ";
	cin >> r;

	cout << "Dairenin Alan�: " << alandaire(r) << endl;
	cout << "Dairenin �evresi: " << cevredaire(r) << endl;

    int sayi;
	int toplam = 0;
	int �arp�m = 1;

	cout << "say� girin: ";
	cin >> sayi;
    
    for (int i = 1; i <= sayi; i++) {
		if (i % 2 != 0) {
			toplam = toplam + i;
			cout << "toplam: " << toplam << endl;
		}
		
	}

    double a, r ;
    
    cout << "a: ";
	cin >> a;
	cout << "r: ";
	cin >> r;
	

	cout << "Silindirin Hacmi: " << silindirhacim(a,r) << endl;

    string txt;
	cout << "Metin giriniz: ";
	cin >> txt;
	cout << "Girdi�iniz metnin uzunlu�u: " << txt.length() << endl;

    string txt = "Berke G�rb�z";
	
	//cout << txt[0]; // birinci harfi verir
	//cout << txt[1]; // ikinci harfi verir
	txt[2] = 'Y';// ���nc� harfi "Y" yapar
	cout << txt;
    int x = 10;
    int y = 5;
	cout << (x > y);// 1 (true) sonucunu verir.
    
    int time = 20;
	string result = (time > 10) ? "Good Night" : "Good Morning"; // tan�m = (ko�ul) ? 1 (true) : 0 (false)
	cout << result;

bool ship[4][4] = {
{1,0,0,0},
{0,1,1,0},
{0,0,0,0},
{1,0,1,0}
};

int hits = 0;
int Numberofturn = 0;
while (hits < 5) {                                                     //amiral batt� oyunu.....
	int sat�r;
	int s�tun;

	cout << "Amiral batt�ya hosgeldiniz" << endl;

	cout << "Kordinatlar� Giriniz..." << endl;

	cout << "0'dan 3'e kadar bir say� giriniz: ";
	cin >> sat�r;

	cout << "0'dan 3'e kadar bir say� giriniz: ";
	cin >> s�tun;

	if (ship[sat�r][s�tun]) {

		ship[sat�r][s�tun] = 0;

		hits++;

		cout << (5 - hits) << "tane gemi kald�.." << endl;

	}
	else {
		cout << "Kacirdiniz..." << endl;
	}
	Numberofturn++;
}

cout << "Kazand�n�z!!!!" << endl;
cout << Numberofturn << "Turda kazand�n�z!!!" << endl;

int x, y, z;
cout << "3 say� giriniz: ";
cin >> x >> y >> z;

if (x > y && x > z) {
	cout << x;
}
else if (y>x && y>z) {
	cout << y;
}
else {
	cout << z;
}

int x;
cout << "say� girin: ";
cin >> x;

cout << log10(x);

int sayi1, sayi2, buyuksay�;
cout << "1. say�y� giriniz: ";
cin >> sayi1;

cout << "2. say�y� giriniz: ";
cin >> sayi2;

for (int i = 2; i <= sayi1 * sayi2; i++) {
	if (i % sayi1 == 0 && i % sayi2 == 0) {
		cout << "EKOK: " << i << endl;
		break;
	}
}


if (sayi1 > sayi2) {
	buyuksay� = sayi1;
}
else {
	buyuksay� = sayi2;
}

for ( buyuksay�; buyuksay� > 0; buyuksay�--) {
	if (sayi1 % buyuksay� == 0 && sayi2 % buyuksay� == 0) {
		cout << "EBOB: " << buyuksay� << endl;
		break;
	}
}


char c;
bool buyukunluharf, kucukunluharf;

cout << "Bir harf giriniz: ";
cin >> c;

buyukunluharf = (c == 'A' || c == 'E' || c == '�' || c == 'I' || c == 'U' || c == '�' || c == 'O' || c == '�');

kucukunluharf = (c == 'a' || c == 'e' || c == 'i' || c == '�' || c == 'u' || c == '�' || c == 'o' || c == '�');



if (!isalpha(c)) {
	cout << "Bir harf giriniz!!!!" << endl;
}
else if (buyukunluharf || kucukunluharf) {
	cout << "Girilen say� sesli bir harftir." << endl;
}
else {
	cout << "Girilen harf sessiz harftir." << endl;
}

int a, b, c;

cout << "a'y� giriniz: ";
cin >> a;
cout << "b'yi giriniz: ";
cin >> b;

c = a;
a = b;
b = c;

cout << "a: " << a << endl;
cout << "b: " << b << endl;

int a, b, c;

cout << "1.say�y� giriniz: ";
cin >> a;
cout << "2.say�y� giriniz: ";
cin >> b;
cout << "3.say�y� giriniz: ";
cin >> c;

if (a >= b && a >= c) {
	cout << "en b�y�k say�: " << a << endl;
}
else if (b >= a && b >= c) {
	cout << "en b�y�k say�: " << b << endl;
}
else if(c >= a && c >= b) {
	cout << "en b�y�k say�: " << c << endl;
}

double a, b, c, x1, x2, diskriminant, realk�s�m, imajinerk�s�m;

cout << "katsay�lar matrislerini girin a, b ve c: ";
cin >> a >> b >> c;
diskriminant = b * b - 4 * a * c;

if (diskriminant > 0) {
	x1 = (-b + sqrt(diskriminant)) / (2 * a);
	x2 = (-b - sqrt(diskriminant)) / (2 * a);                               //ikinci dereceden denklemlerin k�klerini bulma....
	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;
}
else if (diskriminant == 0) {
	x1 = x2 = -b / 2 * a;
	cout << "x: " << x1 << endl;
}
else {
	realk�s�m = -b / 2 * a;
	imajinerk�s�m = sqrt(-diskriminant);
	cout << "x1: " << realk�s�m << " + " << imajinerk�s�m << " i " << endl;
	cout << "x2: " << realk�s�m << " - " << imajinerk�s�m << " i " << endl;
	

}

int x1, x2, a, b, c, d, e;

cout << " ax�+bx+c" << endl;

cout << "(dx+x1)*(ex+x2)" << endl;
cout << "d: ";
cin >> d;
cout << "x1: ";                               //ikinci dereceden denklem yazma....
cin >> x1;
cout << "e: ";
cin >> e;
cout << "x2: ";
cin >> x2;

a = d * e;
b = (d * x1) + (e * x2);
c = x1 * x2;

cout << a << "x�+" << b << "x+" << c << endl; 

int n, range;

cout << "Bir say� giriniz: ";
cin >> n;
cout << "S�n�r giriniz: ";
cin >> range;

for (int i = 1; i <= range; i++) {
	cout << n << " * " << i << " = " << n * i << endl; 
} 

int year;

cout << "Bir y�l giriniz: ";
cin >> year;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
	cout << "Girilen y�l art�k y�ld�r.." << endl;                     //art�k y�l hesaplama.
}
else {
	cout << "Girilen y�l art�k y�l degidir.." << endl;
} 

int n, factorial=1;

cout << "Bir say� giriniz: ";
cin >> n;

if (n < 0) {
	cout << "Bu say�n�n fakt�riyeli yoktur..." << endl;
}

else {
	for (int i = 1; i <= n; i++) {
		factorial *= i;
	}
}
cout << "Girilen say�n�n fakt�riyeli: " << factorial << endl;


int n, t1 = 0, t2 = 1, nextterm;

cout << "Pozitif bir say� girin: ";
cin >> n;

cout << "Fibonacci serisi: " << t1 << ", " << t2 << ", ";

nextterm = t1 + t2;

while (nextterm <= n) {
	cout << nextterm << ", ";
	t1 = t2;
	t2 = nextterm;
	nextterm = t1 + t2;

} 

int �s, taban;

cout << "taban� giriniz: ";
cin >> taban;
cout << "�ss� giriniz: ";
cin >> �s;

cout << "sonu�: " << pow(taban, �s); 


char a;

cout << "Bir karakter giriniz: ";
cin >> a;

cout << a << "ASCII değeri: " << int(a); 

int n;
bool is_prime = true;

cout << "Bir sayı giriniz: ";
cin >> n;

if (n == 0 || n == 1) {
	is_prime = false;
}

for (int i = 2; i <= n / 2; i++) {
	if (n% i == 0) {
		is_prime = false;
		break;
	}
}

if (is_prime) {
	cout << "Girilen sayı prime sayıdır." << endl;
}
else {
	cout << "Girilen sayı prime sayı degildir." << endl;
} 
int n;
cout << "Bir sayı giriniz: ";
cin >> n;

cout << "Toplam: " << dogaltoplam(n) << endl; 
cout << scalbn(2, 5); 

int i = 0;
while (i < 4,5) {        //sonsuz loop yazdırır.
	cout << "loop";
	i++;
} */


int array[8] = { 8,5,3,4,6,1,9,7 };
for (int i = 0; i < 8; i++) {
	if (array[i] > array[i + 1]) {
		array[i] ^= array[i + 1];
	}
}
for (auto n : array) {
	cout << n << endl;
}









	return 0;
} 