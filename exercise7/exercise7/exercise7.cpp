// exercise7.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//ilk iki ve son iki toplamı aynı olan sayılar

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sayi;

	cout << "sayi giriniz ?";
	cin >> sayi;

	for (int i = 1; i < sayi; i++)
	{
		for (int j = 0; j < sayi; j++)
		{
			for (int k = 0; k < sayi; k++)
			{
				for (int n = 0; n < sayi;n++)
				{
					if (i + j == k + n)
					{
						cout << 1000 * i + 100 * j + 10 * k + n << endl;

					}

				}
			}
		}
	}
	system("pause");
	return 0;
}


