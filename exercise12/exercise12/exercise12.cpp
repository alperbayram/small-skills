// exercise12.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//
//0-999 arasındaki girilen sayıları okuyan prog

#include "stdafx.h"
#include <iostream>
#include<clocale>
#include<cmath>

using namespace std;


int main()
{
	setlocale(LC_ALL, "turkish");

	int sayi;
	char devam;
	do
	{
		cout << "SAYİ GİRİNİZ . " << endl;
	a:
		cin >> sayi;

		if (sayi<0 || sayi>999)
		{
			cout << "0 ile 999 arasında  sayı girin" << endl;

			goto a;
		}

		switch (sayi / 100)
		{
		case 0:cout << "";break;
		case 1: cout << "yüz";break;
		case 2: cout << "ikiyüz";break;
		case 3: cout << "ücyüz";break;
		case 4: cout << "dörtyüz";break;
		case 5: cout << "besyüz";break;
		case 6: cout << "altıyüz";break;
		case 7: cout << "yediyüz";break;
		case 8: cout << "sekizyüz";break;
		case 9: cout << "dokuzyüz";break;
		}
		switch ((sayi / 10) % 10)
		{
		case 0:cout << "";break;
		case 1: cout << "on";break;
		case 2: cout << "yirmi";break;
		case 3: cout << "otuz";break;
		case 4: cout << "kırk";break;
		case 5: cout << "elli";break;
		case 6: cout << "altmıs";break;
		case 7: cout << "yetmis";break;
		case 8: cout << "seksen";break;
		case 9: cout << "doksan";break;
		}
		switch (sayi % 10)
		{
		case 0:cout << "";break;
		case 1: cout << "bir";break;
		case 2: cout << "iki";break;
		case 3: cout << "üc";break;
		case 4: cout << "dört";break;
		case 5: cout << "bes";break;
		case 6: cout << "altı";break;
		case 7: cout << "yedi";break;
		case 8: cout << "sekiz";break;
		case 9: cout << "dokuz";break;
		}
		cout << endl;

		cout << "devam etmek istiyor musun ?(e/h)";
		cin >> devam;

	} while (devam == 'e' || devam == 'E');
	system("pause");
	return 0;
}

