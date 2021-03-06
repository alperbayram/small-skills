// exercise16.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

////BİR HASTANEDE YAOPILAN MUAYENE ,RECETE HAZIRLAMA İŞLEMLERİNİ YAPAN PROGRAM
#include "stdafx.h"
#include <time.h>                   //receteye randum atamak için
#include <iostream>
#include <Windows.h>				//Sleep komutu için
#include <fstream>					//Dosya işlemleri kütüphanesi
#include <string>					//String kütüphanesi
#include<cstdio>                    //remove ve rename için
#include <locale.h>					//Dil kütüphanesi
#include <iomanip>					//Setw() kullanmak için
#include <stdio.h>                  //dosya giriş çikiş işlemleri için gerekli kütüphane.. 

using namespace std;

void recete_atama()
{
	srand((unsigned int)time(0));
	char *characters = "ABCDEFGHIJKLMNOPRSTUVWXYZ123456789";         //reçete için randum karakter

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

	setlocale(LC_ALL, "Turkish");
	cout << endl << endl << endl << endl << endl;
	cout << setw(55) << "BAYRAMS HASTANESİ" << endl;

	string doktor_adi, sifre;

	for (;;)
	{
		cout << "********************************************************************************" << endl;
		cout << setw(43) << "Doktor Adı: "; cin >> doktor_adi; cout << endl;
		cout << setw(43) << "Parola: "; cin >> sifre; cout << endl;

		if (doktor_adi == "DOKTOR" && sifre == "DOKTOR")									//DOKTOR giriş ekranı  Doktor adı: DOKTOR
		{																				//						   parola:DOKTOR
			system("cls");
			cout << "BAYRAMS HASTANESİ HASTANESİ" << endl;
			cout << "Giriş Başarılı!" << endl;
			break;
		}
		else
		{
			system("cls"); cout << "Bilgileri kontrol edip tekrar deneyiniz!" << endl;
		}
	}
	system("cls");



	string hasta_TC;     							  //muayene kayiti için gereken stringleri oluşturdum..
	string hasta_adi;
	string hasta_soyadi;
	string hastaligi;
	string ilac;
	string kullanimi;



	int istek;							                                                //Menudeki işlem seçimi
	char devam;                                                                         //Menu tekrarı için
	char cevap;

	do
	{

		do //istenmeyen istek yapıldıgında hata verip, tekrar secme islem yaptırması icin do while dongusu kurdum..
		{
			cout << endl << endl << " MUAYENE SİSTEMİ" << endl << endl;
			cout << "Yapmak İstediğiniz İşlemi Seçiniz." << endl;									//Kullanıcının isteği işlem soruldu.
			cout << "1-Muayeneye Başla " << endl;
			cout << "2-Muayene Bilgilerini Düzeltme" << endl;
			cout << "3-Muayene bilgilerini Silme" << endl;
			cout << "4-Muayene Edilen Hastaların Listesi" << endl;
			cout << "5-Muayene Edilen Hastanın Reçetesi " << endl;
			cout << "6-Çıkış" << endl;
			cin >> istek;


		} while (istek != 1 && istek != 2 && istek != 3 && istek != 4 && istek != 5 && istek != 6);

		{
			if (istek == 1) //Secenek 1 ise çalişacak kodu yazdim.
			{

				setlocale(LC_ALL, "Turkish");
				system("cls"); //console ekranini temizledim.


				ofstream DosyaYaz; //Dosya çikişi yapabilmek için gerekli kodu yazdim.

				DosyaYaz.open("muayene.txt", ios::app); //muayene.txt dosyasini dosya ekleme modunda açtim


				system("cls");
				//gerekli değerleri girdirdim
				cout << "Hasta TC'Sİ : "; cin >> hasta_TC;
				cout << "Hasta ADI : "; cin >> hasta_adi;
				cout << "Hasta SOYADI : "; cin >> hasta_soyadi;
				cout << "Teşhis/Tanı : "; cin >> hastaligi;
				cout << "İlaç: "; cin >> ilac;
				cout << "Kullanımı : "; cin >> kullanimi;


				DosyaYaz << "\n" << hasta_TC << " " << hasta_adi << " " << hasta_soyadi << " " << hastaligi << " " << ilac << " " << kullanimi;//muayene.txt dosyasina alip değişkenlere atadiğim bilgileri kayit yaptim.

				cout << "Muayene Kayidi Tamamlandi" << endl; //kayip bittiğinde ekrana olumlu bir sonuç yazisi yazdirdim.



				DosyaYaz.close();

			}

		}
		if (istek == 2)
		{
			string sorgu_TC;
			system("cls");
			setlocale(LC_ALL, "Turkish");


			ifstream DosyaOku("muayene.txt");  //Dosya çikişi yapabilmek için gerekli kodu yazdim.
			ofstream DosyaYaz("sil.tmp");     //sil bir dosya açilir


			cout << "Duzenlenecek Hastanın TC. Kimlik Numarasi...:"; cin >> sorgu_TC; //düzenlenecek kimlik numarasini sorgulattim.

			int sil = 0;

			while (!(DosyaOku.eof())) //DosyaOku da belirttiğim Hasta.txt dosyasini sonuna kadar okuttum.
			{
				DosyaOku >> hasta_TC >> hasta_adi >> hasta_soyadi >> hastaligi >> ilac >> kullanimi;//muayene.txt dosyasindaki kayitlar okunur

				if (sorgu_TC == hasta_TC)                                //Sorgulanan TC. Kimlik numarasi varsa hasta bilgilerini gösterir.
				{
					cout << "========== Muayene  Bilgileri ==========" << endl << endl;
					//hasta bilgieri yazdirilir.
					cout << "Hasta Tc :" << hasta_TC << endl;
					cout << "Hasta Adi :" << hasta_adi << endl;
					cout << "Hasta Soyadi :" << hasta_soyadi << endl;
					cout << "Teşhis/Tanı:" << hastaligi << endl;
					cout << "İlaç:" << ilac << endl;
					cout << "Kullanımı :" << kullanimi << endl;

					cout << endl;

					cout << "Muayenenin Bilgilerini Düzeltiniz..." << endl << endl;

					cout << "\n Hasta Tc :";cin >> sorgu_TC;
					cout << "\n Hasta Adi  :"; cin >> hasta_adi;
					cout << "\n Hasta Soyadi  :"; cin >> hasta_soyadi;
					cout << "\n Teşhis/Tanı  :"; cin >> hastaligi;
					cout << "\n İlaç :"; cin >> ilac;
					cout << "\n Kullanımı :"; cin >> kullanimi;


					DosyaYaz << "\n" << sorgu_TC << " " << hasta_adi << " " << hasta_soyadi << " " << hastaligi << " " << ilac << " " << kullanimi;//Düzenlenen dosya bilgileri yazdirilir.

					sil = 1;
				}
				else
				{
					DosyaYaz << "\n" << hasta_TC << " " << hasta_adi << " " << hasta_soyadi << " " << hastaligi << " " << ilac << " " << kullanimi;
				}
			}
			if (sil == 0)
			{
				cout << "Bu TC'ye ait  Kayitlı Hasta Bulunamadı.." << endl;

			}
			DosyaYaz.close();
			DosyaOku.close();
			remove("muayene.txt");// hasta.txt dosyasi silinirken
			rename("sil.tmp", "muayene.txt");//sil.tmp dosyasi hasta.txt dosyasi olarak değiştirirlir.

		}

		if (istek == 3)
		{
			system("cls");
			setlocale(LC_ALL, "Turkish");
			string silhasta_TC;
			cout << "Silinecek Hastanın TC Numarasini Giriniz :";
		a:
			cin >> silhasta_TC;

			ifstream DosyaOku("muayene.txt");
			ofstream DosyaYaz("sil.tmp");//sil bir dosya açilir
			bool b = false;
			while (!(DosyaOku.eof())) //DosyaOku da belirttiğim Hasta.txt dosyasini sonuna kadar okuttum.
			{
				DosyaOku >> hasta_TC >> hasta_adi >> hasta_soyadi >> hastaligi >> ilac >> kullanimi;

				if (hasta_TC == silhasta_TC)//Girilen TC. Kimlik nosu kayitlarda var ise hasta kaydini görüntüler.
				{

					cout << "========== Muayene Bilgileri ==========" << endl << endl;

					cout << " Hasta Tc :" << silhasta_TC << endl;
					cout << " Hasta Adi :" << hasta_adi << endl;
					cout << " Hasta Soyadi :" << hasta_soyadi << endl;
					cout << "Teşhis/Tanı :" << hastaligi << endl;
					cout << "İlaç :" << ilac << endl;
					cout << "Kullanımı :" << kullanimi << endl;


					cout << "Silme Islemi Gerceklesdi..." << endl;
					b = true;
				}
				else
					DosyaYaz << "\n" << hasta_TC << " " << hasta_adi << " " << hasta_soyadi << " " << hastaligi << " " << ilac << " " << kullanimi;
			}

			DosyaYaz.close();
			DosyaOku.close();

			remove("muayene.txt");//dosyayi sildim.
			rename("sil.tmp", "muayene.txt");//sil dosyalar kayit silindikten tmp dosyasi txt dosyasina aktarilir.
			if (b == false)
			{
				cout << " Silinecek Hastanın TC Numarasini Tekrar  Giriniz : ";
				goto a;
			}
		}

		if (istek == 4)
		{
			system("cls"); //console ekranini temizledim.
			setlocale(LC_ALL, "Turkish");

			cout << "----------KAYITLI HASTALAR---------" << endl;
			ifstream DosyaOku("muayene.txt");
			while (!(DosyaOku.eof())) //DosyaOku da belirttiğim Hasta.txt dosyasini sonuna kadar okuttum.
			{
				DosyaOku >> hasta_TC >> hasta_adi >> hasta_soyadi >> hastaligi >> ilac >> kullanimi;

				cout << "Hasta Tc :" << hasta_TC << endl;
				cout << "Hasta  Adi :" << hasta_adi << endl;
				cout << "Hasta  Soyadi :" << hasta_soyadi << endl;
				cout << endl;

			}
			DosyaOku.close(); //dosya okumayi kapattim.

		}
		if (istek == 5)
		{
			string receteTC;
			setlocale(LC_ALL, "Turkish");
			system("cls");//ekran temizlenir

			cout << "Recetesi İstenilen Hastanın Tc'sini Giriniz: ";
		c:
			cin >> receteTC;//dişaridan tc girdirilir.



			ifstream DosyaOku("muayene.txt");//muayene.txt dosyasi DosyaOku modunda tanimlanir.
			bool b = false;


			while (!(DosyaOku.eof()))// Dosya sonuna kadar okunur.
			{
				DosyaOku >> hasta_TC >> hasta_adi >> hasta_soyadi >> hastaligi >> ilac >> kullanimi;




				if (receteTC == hasta_TC)
				{

					cout << "-----------HASTANIN REÇETE BİLGİLERİ------------- " << endl << endl;
					cout << "RECETE KODU :";recete_atama();cout << endl;
					cout << "Hasta Tc :" << hasta_TC << endl;
					cout << "Hasta Adi :" << hasta_adi << endl;
					cout << "Hasta Soyadi :" << hasta_soyadi << endl;
					cout << "Teşhis/Tanı :" << hastaligi << endl;
					cout << "İlaç :" << ilac << endl;
					cout << "Kullanımı :" << kullanimi << endl;
					b = true;

				}
				else
				{
					//cout << "Lütfen Tekrar Deneyiniz." << endl;

				}

			}
			DosyaOku.close();
			if (b == false)
			{
				cout << " Recetesi İstenilen Hastanın Tc'sini Tekrar  Giriniz: " << endl;
				goto c;
			}

		}

		if (istek == 6)
		{
			system("cls");
			cout << "Başarıyla Çıkış Yaptınız Görüşmek Üzere" << endl;
			exit(0);
		}
		cout << "Ana Menuye dönmek istiyor  musun ?(E/H)" << endl;
		cin >> devam;
		if (devam != 'e'&&devam != 'H'&&devam != 'E'&&devam != 'h')
		{
			cout << "Girdiğiniz işlem geçersiz.Lütfen Tekrar deneyiniz." << endl;
			cin >> devam;
			if (devam == 'h' || devam == 'H')
			{
				system("cls");
				cout << "Başarıyla Çıkış Yaptınız Görüşmek Üzere" << endl;
				exit(0);
			}
		}system("cls");


	} while (devam == 'e' || devam == 'E');

	system("pause");
	return 0;
}

