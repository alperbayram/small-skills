// exercise1.cpp: Konsol uygulamasının giriş noktasını tanımlar.


// rastgele 6 basamaklı harf ve sayı atama


#include "stdafx.h"
#include<iostream>
#include<random>
#include<time.h>

using namespace std;

void recete_atama()
{
	srand((unsigned int)time(0));
	char *characters = "ABCDEFGHIJKLMNOPRSTUVWXYZ123456789";         // randum karakter

	int chrs_len = strlen(characters);
	int r_char;
	char random_character;

	for (int i = 0; i < 6; i++)
	{
		r_char = rand() % chrs_len;
		random_character = characters[r_char];
		cout << random_character;
	}
}
int main()
{
	recete_atama();
	system("pause");
	return 0;
}