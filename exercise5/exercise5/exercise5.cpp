// exercise5.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

//girilen cümlede kaç harf olduğunu bulan prog
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int sayac = 0;
	char harf;

	char cumle[50];
	cout << "Bir cumle giriniz :";
	gets_s(cumle);
	cout << "Bir harf giriniz  :";
	cin >> harf;
	for (int i = 0;i<strlen(cumle);i++)
	{
		if (cumle[i] == harf)    sayac++;
	}
	cout << "Girdiginiz cumlede " << harf << "harfinden " << sayac << " tane vardir.";

	system("pause");
	return 0;
}

