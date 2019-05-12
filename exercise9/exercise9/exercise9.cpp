// exercise9.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//faktöriyeli rekürsif ile hesaplama

#include "stdafx.h"
#include <iostream>

using namespace std;

int faktoriyel(int a)
{
	if (a <= 0)
	{
		return 1;
	}
	if (a>0)
	{
		return a*(faktoriyel(a - 1));
	}
}
int main()
{
	int sayi;
	char  devam;
	do
	{
		cout << "sayı giriniz: ";
		cin >> sayi;

		cout << faktoriyel(sayi) << endl;
		cout << "devam etmek istiyor musun ?(E/H)";
		cin >> devam;
	} while (devam == 'E' || devam == 'e');

	system("pause");
	return 0;

}