// exercise17.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//
//txt dosyası oluşturma

#include "stdafx.h"
#include <iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream dosya;
	float sayi = 123.456;
	dosya.open("test.txt", ios::out);
	if (!dosya) {
		cout << "Dosya acma hatasi!" << endl;
		return 0;
	}
	dosya << sayi << endl;
	dosya.precision(5);
	dosya << sayi << endl;
	dosya.precision(4);
	dosya << sayi << endl;

	system("pause");
	return 0;
}

