// exercise15.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//girilen sayını kaç basamaklı olduğunu basar

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sayı, basamak = 1;
	cout << "sayi giriniz : ";
	cin >> sayı;
	do
	{
		sayı = sayı / 10;
		basamak++;

	} while (sayı >= 10);
	cout << "basamak sayısıs  : " << basamak;
	system("pause");
	return 0;
}

