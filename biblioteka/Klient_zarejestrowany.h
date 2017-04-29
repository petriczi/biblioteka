#include <exception>
#include <string>
using namespace std;

#ifndef __Klient_zarejestrowany_h__
#define __Klient_zarejestrowany_h__

#include "klient.h"
// #include "Ocena_i_komentarz.h"

namespace Baza_Klient�w
{
	// class klient;
	class Klient_zarejestrowany;
}
namespace Powiadomienia
{
	class Ocena_i_komentarz;
}

namespace Baza_Klient�w
{
	class Klient_zarejestrowany: public Baza_Klient�w::klient
	{
		private: string _login;
		private: string _has�o;
		public: Powiadomienia::Ocena_i_komentarz* _wystawia;

		/// <summary>
		/// Warunki pocz�tkowe: Klient jest zarejestrowany w systemie zgodnie z "Zarejestruj klienta".  
		///    
		/// Przebieg podstawowy:  
		/// 1.      Klient loguje si� w systemie za po�rednictwem strony internetowej zgodnie z Zarejestruj klienta.  
		/// 2.      Klient wyszukuje z listy wybrany tytu�.  
		/// 3.      Klient wybiera termin odebrania ksi��ki.  
		/// 4.      Klient wybiera termin zwrotu ksi��ki.  
		/// 5.      Klient potwierdza rezerwacj�.  
		///    
		/// Wynik: Zarezerwowano ksi��k�.  
		/// </summary>
		public: void zarezerwuj_ksi��k�();

		/// <summary>
		/// Warunki pocz�tkowe: Klient jest zarejestrowany w systemie zgodnie z zarejestruj klienta i wypo�yczy� ksi��k� zgodnie z wypo�ycz ksi�zke.  
		///    
		/// Przebieg podstawowy:  
		/// 1.      Klient loguje si� w systemie za po�rednictwem strony internetowej.  
		/// 2.      Klient przechodzi do sekcji przeczytanych ksi��ek.  
		/// 3.      Klient wybiera tytu�.  
		/// 4.      Klient wystawia wystawia komentarz.  
		/// 5.      Klient wystawia ocen� w skali 0-10.  
		/// 6.      Klient potwierdza komentarz i ocen�.  
		///    
		/// Wynik: Dodanie oceny i komentarza do profilu ksi��ki w systemie.  
		/// </summary>
		public: void oce�_ksi��k�();

		/// <summary>
		///    
		/// Warunki pocz�tkowe: Klient jest zarejestrowany w systemie zgodnie z zarejestruj klienta.  
		///    
		/// Przebieg podstawowy (klient zarejestrowany):  
		/// 1.      Klient loguje si� na swoje konto w systemie za pomoc� strony internetowej, lub terminala w bibliotece zgodnie z zaloguj do systemu.  
		/// 2.      System wy�wietla baz� ksi��ek i okno wyszukiwania.  
		/// 3.      Klient wyszukuje wybran� pozycj�.  
		/// 4.      Klient wybiera opcj� pokazania szczeg�owych informacji o ksi��ce.  
		/// 5.      System wy�wietla okre�lone przez administratora informacj� np. kr�tki opis, oceny i komentarze u�ytkownik�w i reszt� informacji podstawowych.  
		///    
		///    
		///    
		/// Wynik: Wy�wietlenie informacji o ksi��ce.  
		/// </summary>
		public: void wy�wietl_informacje_o_ksi��ce();

		/// <summary>
		/// Warunki pocz�tkowe: Konto u�ytkownika jest dodane zgodnie z zarejestruj klienta.  
		/// Przebieg podstawowy: 
		///                 1.    Klient wpisuje login.   
		///                 2.    Klient wpisuje has�o.  
		///                 3.    Weryfikacja danych.  
		///    
		/// Przebieg alternatywny:  
		///    
		/// 1.      Has�o zosta�o 3 razy �le wpisane.  
		/// 2.      Konto zostaje zablokowane.  
		///    
		/// Wynik: Pracownik lub klient zosta� zalogowany w systemie.   
		///    
		/// </summary>
		public: void zaloguj_si�();
	};
}

#endif
