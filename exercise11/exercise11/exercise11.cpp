// exercise11.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//çarpım tablosu

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	cout << "ÇARPIM TABLOSU" << endl;
	int sayı;
a:
	cout << endl;
	cout << "SAYI GİRİNİZ : ";
	cin >> sayı;

	for (int i = 1; i < 10; i++)
	{
		for (int j = sayı; j <= sayı; j++)
		{
			cout << j << "X" << i << "=" << i*j << "\t";
		}
		cout << endl;
	}
	goto a;
	system("pause");
	return 0;
}
