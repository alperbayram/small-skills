// exercise10.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//girilen sayının tersi

#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int sayi, ters;
	cout << "sayiyi giriniz : ";
	cin >> sayi;
	cout << "sayinin tersi : ";
	while (sayi>0)
	{
		ters = sayi % 10;
			cout << ters;
		sayi = sayi / 10;
	}
	system("pause");
	return 0;
}
