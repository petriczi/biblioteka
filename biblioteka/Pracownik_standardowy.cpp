#include <exception>
#include <iostream>
#include <string>
using namespace std;

#include "Pracownik_standardowy.h"
void Zarz�dzanie_bibliotek�::Pracownik_standardowy::dodaj_ksi��k�() {
	throw "Not yet implemented";
}

void Zarz�dzanie_bibliotek�::Pracownik_standardowy::usu�_ksi��k�() {
	throw "Not yet implemented";
}

void Zarz�dzanie_bibliotek�::Pracownik_standardowy::edytuj_wypo�yczenie() {
	throw "Not yet implemented";
}

void Zarz�dzanie_bibliotek�::Pracownik_standardowy::usu�_wypo�yczenie() {
	throw "Not yet implemented";
}

void Zarz�dzanie_bibliotek�::Pracownik_standardowy::dodaj_notatk�() {
	throw "Not yet implemented";
}

void Zarz�dzanie_bibliotek�::Pracownik_standardowy::dodaj_wypo�yczenie() {
	throw "Not yet implemented";
}

void Zarz�dzanie_bibliotek�::Pracownik_standardowy::zaloguj_si�() {
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
			cout << endl << "Witaj, "; cout << Zarz�dzanie_bibliotek�::Pracownik_standardowy::_imie + " " + Zarz�dzanie_bibliotek�::Pracownik_standardowy::_nazwisko;
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

void Zarz�dzanie_bibliotek�::Pracownik_standardowy::obs�u�_klienta_() {
	throw "Not yet implemented";
}

Zarz�dzanie_bibliotek�::Pracownik_standardowy::Pracownik_standardowy() {
	_imie = "Krzysztof";
	_nazwisko = "Nowak";
}

