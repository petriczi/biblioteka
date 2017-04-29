#include<iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "Kara.h"
#include "klient.h"
#include "Klient_niezarejestrowany.h"
#include "Klient_zarejestrowany.h"
#include "Ksi¹¿ka.h"
#include "obsluga_czytelnika.h"
#include "Ocena_i_komentarz.h"
#include "Pozycja_WYP.h"
#include "Pracownik_standardowy.h"
#include "wypo¿yczenie.h"


using namespace std;
using namespace Baza_Klientów;
using namespace Zarz¹dzanie_bibliotek¹;
using namespace Magazyn_Ksi¹zek;
vector < string > MyVector;
void menu()
{





}
int main()
{

	MyVector.push_back("Symfonia C++");//tytul
	MyVector.push_back("233");//ISBN
	MyVector.push_back("Kurs jezyka C++");//opis
	MyVector.push_back("Dostepna");//status
	MyVector.push_back("");//data oddania
	MyVector.push_back("");//data wyporzyczenia

	MyVector.push_back("Kurs Photoshop");//tytul
	MyVector.push_back("342");//ISBN
	MyVector.push_back("Obrobka zdjec");//opis
	MyVector.push_back("brak");//status

	MyVector.push_back("Podstawy ekonomii");//tytul
	MyVector.push_back("300542");//ISBN
	MyVector.push_back("Ekonomia od podstaw heheheeh xd");//opis
	MyVector.push_back("dostepna");//status


	klient klient1;
	Pracownik_standardowy pracownik;
	cout << "Logowanie do systemu:" << endl;
	cout << "1. Pracownik" << endl;
	cout << "2. Klient" << endl;
	cout << "3. Wyjscie" << endl;
	int wybor;
	bool correct = true;
	int wybor2;

	do
	{
		cin >> wybor;
		switch (wybor)
		{
		case 1:
			//loguje sie pracownik
			pracownik.zaloguj_siê();

			correct = true;
			break;

		case 2: //loguje sie klient
			klient1.zaloguj_sie();
			cout << "Co chcesz zrobic: " << endl;
			cout << "1. Wyporzycz ksiazke " << endl;
			cout << "2. : " << endl;
			cin >> wybor2;
			switch (wybor2)
			{
			case 1:
				

				klient1.wyporzycz_ksi¹¿kê();


				break;

			case 2:
				//jakiœ kod
				break;

				//...
			case 3:
				//jakiœ kod
				break;

			default:
				//jakiœ kod
				break;
			}


			correct = true;
			break;

			//...
		case 3:
			exit(1);
			break;

		default:
			cout << endl;
			cout << "Wybierz numer z zakresu 1-3" << endl;
			correct = false;

			break;
		}

	} while (!correct);
	system("pause");
	return 0;
}