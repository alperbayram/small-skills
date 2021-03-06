// exercise8.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//
//fibonacci sayılar
#include "stdafx.h"
#include <iostream>

using namespace std;

int fibonacci(int n)
{
	int fib;
	if (n > 1)
	{
		fib = fibonacci(n - 1) + fibonacci(n - 2);
		return fib;
	}
	else if (n == 1)
		return 1;
	else
		return 0;
}

int main()
{
	double sayi;
	char  devam;

	do
	{
		cout << "sayı giriniz: ";
		cin >> sayi;

		cout << fibonacci(sayi) << endl;
		cout << "devam etmek istiyor musun ?(E/H)";
		cin >> devam;
	} while (devam == 'E' || devam == 'e');

	system("pause");
	return 0;

}