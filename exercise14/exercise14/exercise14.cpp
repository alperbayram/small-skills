// exercise14.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//
//isteğe göre dikdörtgen ve sağ sol üçgen basan prog
#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int sayı;
	cout << "KAÇ SATIR YILDIZ OLSUN : ";
	cin >> sayı;

	for (int i = 0; i < sayı; i++)
	{
		for (int j = 0; j <sayı; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	cout << "////////////////////////////" << endl;

	cout << "KAÇ SATIR YILDIZ OLSUN : ";
	cin >> sayı;

	for (int i = 0; i < sayı; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	cout << "////////////////////////////" << endl;

	cout << "KAÇ SATIR YILDIZ OLSUN : ";
	cin >> sayı;

	for (int i = 0; i < sayı; i++)
	{
		for (int j = 0; j <sayı - (i + 1); j++)
		{
			cout << " ";
		}

		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
	return 0;

}

