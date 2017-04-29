#include <exception>
#include <iostream>
#include <string>
using namespace std;

#include "Pracownik_standardowy.h"
void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::dodaj_ksi¹¿kê() {
	throw "Not yet implemented";
}

void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::usuñ_ksi¹¿kê() {
	throw "Not yet implemented";
}

void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::edytuj_wypo¿yczenie() {
	throw "Not yet implemented";
}

void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::usuñ_wypo¿yczenie() {
	throw "Not yet implemented";
}

void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::dodaj_notatkê() {
	throw "Not yet implemented";
}

void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::dodaj_wypo¿yczenie() {
	throw "Not yet implemented";
}

void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::zaloguj_siê() {
	string login = "pracownik";
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
			cout << endl << "Witaj, "; cout << Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::_imie + " " + Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::_nazwisko;
			cout<< endl << endl;

			//menu pracownika
			cout << "1. Podaj login: ";




			//koniec menu






		}
		else
		{
			cout << "Podano bledne dane logowania :(" << endl;
		}




	}
}

void Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::obs³u¿_klienta_() {
	throw "Not yet implemented";
}

Zarz¹dzanie_bibliotek¹::Pracownik_standardowy::Pracownik_standardowy() {
	_imie = "Krzysztof";
	_nazwisko = "Nowak";
}

