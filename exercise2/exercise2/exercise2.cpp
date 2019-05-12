// exercise2.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//ters üçgen ve yanyana iki dörtgen yıldızlar ile şekil basan prog

#include "stdafx.h"
#include<iostream>

using namespace std;
void yıldız1(int sayı);
void yıldız2(int sayı);

int main()
{
	yıldız1(6);
	cout << endl;
	yıldız2(6);
	system("pause");
	return 0;
}
void yıldız1(int sayı)
{
	int satıruzunluğu = 2 * sayı - 1;
	for (int i = 0; i < sayı; i++)
	{
		for (int j = 0; j < satıruzunluğu; j++)
		{
			if (j<i || j>satıruzunluğu - i - 1)
			{
				cout << " ";
			}
			else
				cout << "*";
		}
		cout << endl;
	}

}
void yıldız2(int sayı)
{
	int satıruzunluğu = 2.5*sayı;
	for (int i = 0; i < sayı; i++)
	{
		for (int j = 0; j < satıruzunluğu; j++)
		{
			if (j>sayı - 1 && j<sayı + sayı / 2)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}
