// exercise6.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//amstrong sayılar

#include "stdafx.h"

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sayi;

	cout << "amstrong sayılar : ";
	cin >> sayi;
	for (int i = 0; i < sayi; i++)
	{
		for (int j = 0; j < sayi; j++)
		{
			for (int k = 0; k < sayi; k++)
			{
				if (100 * i + 10 * j + k == i*i*i + j*j*j + k*k*k)
				{
					cout << 100 * i + 10 * j + k << endl;
				}
			}

		}
	}
	system("pause");
	return 0;
}
