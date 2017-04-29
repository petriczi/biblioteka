#include <exception>
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


#include "klient.h"
extern vector < string > MyVector;

void Baza_Klientów::klient::wyporzycz_ksi¹¿kê() {
	cout<<endl<<"======="<<endl;
	cout << "1. Tytul: " << MyVector[0] << endl; 
	cout<<"ISBN: " << MyVector[1] << endl;
	cout << "Opis: " << MyVector[2] << endl;
	cout << "Status: " << MyVector[3] << endl;
	cout << endl;
	cout << "2. Tytul: " << MyVector[6] << endl;
	cout << "ISBN: " << MyVector[7] << endl;
	cout << "Opis: " << MyVector[8] << endl;
	cout << "Status: " << MyVector[9] << endl;
	cout << "=======" << endl<<endl;
	cout << "3. Tytul: " << MyVector[10] << endl;
	cout << "ISBN: " << MyVector[11] << endl;
	cout << "Opis: " << MyVector[12] << endl;
	cout << "Status: " << MyVector[13] << endl;
	cout << "=======" << endl << endl;
	int opcja;
	int data_wyp;
	int data_odd;
	int potwierdzenie = 0;
	cout << "Wybierz pozycje do wyporzyczenia: ";
	cin >> opcja;
	cout << "Podaj date wyporzyczenia: "; cin >> MyVector[4];
	cout << "Podaj date oddania: "; cin >> MyVector[5];


	fstream plik("wyporzyczenie_oczekujace.txt", std::ios::out);
	switch (opcja)
	{
	case 1:
		if (MyVector[3] == "brak")
		{
		
			cout << "Brak ksi¹zki na stanie :(";

		}
		else
		{
			 potwierdzenie = 0;
			cout << "Czy potwierdzic wyporzyczenie ?" << endl;
			cout << "0 - nie" << endl;
			cout << "1 - tak" << endl;
			cin >> potwierdzenie;
			if (potwierdzenie == 1)
			{
				plik << MyVector[0] << endl;
				plik << MyVector[1] << endl;
				plik << MyVector[2] << endl;
				plik << MyVector[3] << endl;
				plik << MyVector[4] << endl;
				plik << MyVector[5] << endl;
				cout << "Wyporzyczenie w trakcie realizacji, zapraszamy do biblioteki po odbior ksiazki" << endl;
			}
			else
			{
				cout << "Operacja anulowana" << endl;
			}
			
		}
		break;

	case 2:
		if (MyVector[9] == "brak")
		{
			cout << "Brak ksi¹zki na stanie :(";
		}
		else
		{

			potwierdzenie = 0;
			cout << "Czy potwierdzic wyporzyczenie ?" << endl;
			cout << "0 - nie" << endl;
			cout << "1 - tak" << endl;
			cin >> potwierdzenie;
			if (potwierdzenie == 1)
			{
			plik << MyVector[6] << endl;
			plik << MyVector[7] << endl;
			plik << MyVector[8] << endl;
			plik << MyVector[9] << endl;
			plik << MyVector[4] << endl;
			plik << MyVector[5] << endl;
			cout << "Wyporzyczenie w trakcie realizacji, zapraszamy do biblioteki po odbior ksiazki" << endl;
			}
			else
			{
				cout << "Operacja anulowana" << endl;
			}
		}
		break;

	case 3:
		if (MyVector[13] == "brak")
		{

			cout << "Brak ksi¹zki na stanie :(";

		}
		else
		{
			potwierdzenie = 0;
			cout << "Czy potwierdzic wyporzyczenie ?" << endl;
			cout << "0 - nie" << endl;
			cout << "1 - tak" << endl;
			cin >> potwierdzenie;
			if (potwierdzenie == 1)
			{
			plik << MyVector[10] << endl;
			plik << MyVector[11] << endl;
			plik << MyVector[12] << endl;
			plik << MyVector[13] << endl;
			plik << MyVector[4] << endl;
			plik << MyVector[5] << endl;
			cout << "Wyporzyczenie w trakcie realizacji, zapraszamy do biblioteki po odbior ksiazki" << endl;
		}
			else
			{
				cout << "Operacja anulowana" << endl;
			}
		}
		break;
	
	}

}

void Baza_Klientów::klient::zwróæ_ksi¹¿kê() {
	cout << "Not yet implemented";
}

void Baza_Klientów::klient::zap³aæ_karê() {
	cout << "Not yet implemented";
}

void Baza_Klientów::klient::zaloguj_sie() 
{
	string login = "user";
	string haslo = "1337";
	string insert_login = "";
	string insert_haslo = "";


	bool logged_status = false;
	while (!logged_status)
	{
		cout << "Podaj login: ";
		cin >> insert_login;
		cout << "Podaj haslo:";
		cin >> insert_haslo;
		if (login == insert_login && haslo == insert_haslo)
		{
			logged_status = true;
			cout << endl << "Zalogowano pomyslnie. Witamy w systemie bibliotecznym." << endl << endl;
		}
		else
		{
			cout << "Podano bledne dane logowania :(" << endl;
		}




	}

}

Baza_Klientów::klient::klient() {
	_pESEL = 12458;
	_imiê = "Jan";
	_nazwisko = "Kowalski";
	_adres = "Wojska Polskiego 1/2";
}

