// exercise13.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//mükemmel sayı

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int main()
{	long  sayı;
	int bölenler = 0;
a:
	cout << endl;

	cout << "BİR SAYI GİRİNİZ :  ";
	cin >> sayı;

	for (int i = 1; i < sayı; i++)
	{
		if (sayı%i == 0)
		{
			bölenler += i;
		}
	}

	if (sayı == bölenler)
	{
		cout << "MÜKEMMEL SAYIDIR. " << endl;
	}
	else
	{
		cout << "MÜKEMMEL DEĞİLDİR. " << endl;
	}
	goto a;
	system("pause");
	return 0;

}




