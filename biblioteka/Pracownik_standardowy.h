#include <exception>
#include <string>
using namespace std;

#ifndef __Pracownik_standardowy_h__
#define __Pracownik_standardowy_h__

namespace Zarz¹dzanie_bibliotek¹
{
	class Pracownik_standardowy;
}

namespace Zarz¹dzanie_bibliotek¹
{
	class Pracownik_standardowy
	{
		private: string _imie;
		private: string _nazwisko;

		/// <summary>
		/// Warunki pocz¹tkowe: Pracownik jest zalogowany w systemie..  
		/// Przebieg podstawowy:  
		///    
		/// 1.      Pracownik znajduje konto klienta w systemie.  
		/// 2.      Pracownik dodaje notatkê.  
		/// 3.      Pracownik zatwierdza notatkê.  
		///    
		/// Wynik: Dodano notatkê do konta klienta.   
		/// </summary>
		public: void dodaj_ksi¹¿kê();

		/// <summary>
		/// Przebieg podstawowy:   
		///     
		/// 1.       Pracownik znajduje wypo¿yczenie w bazie wypo¿yczen.   
		/// 2.       Pracownik usuwa dane wypo¿yczenia.   
		/// 3.       Pracownik zatwierdza usuniêcie wypo¿yczenia.   
		///     
		/// Wynik: Z edytowano wypo¿yczenie w bazie wypo¿yczeñ.   
		/// </summary>
		public: void usuñ_ksi¹¿kê();

		/// <summary>
		/// Warunki pocz¹tkowe: Pracownik jest zalogowany w systemie, w bazie wypo¿yczeni istnieje wypo¿yczenie dodane zgodnie z wypo¿ycz ksi¹zkê.
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Pracownik znajduje wypo¿yczenie w bazie wypo¿yczeni.  
		/// 2.      Pracownik edytuje dane wypo¿yczenia.  
		/// 3.      Pracownik zatwierdza wprowadzone zmiany.  
		///    
		/// Wynik: Z edytowano wypo¿yczenie w bazie wypo¿yczeñ.   
		///    
		/// </summary>
		public: void edytuj_wypo¿yczenie();

		/// <summary>
		/// Warunki pocz¹tkowe: Pracownik jest zalogowany w systemie, w bazie wypo¿yczeni istnieje wypo¿yczenie dodane zgodnie z wypo¿ycz ksi¹¿kê.  
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Pracownik znajduje wypo¿yczenie w bazie wypo¿yczeñ.  
		/// 2.      Pracownik usuwa dane wypo¿yczenia.  
		/// 3.      Pracownik zatwierdza usuniêcie wypo¿yczenia.  
		///    
		/// Wynik: Z edytowano wypo¿yczenie w bazie wypo¿yczeñ.   
		/// </summary>
		public: void usuñ_wypo¿yczenie();

		/// <summary>
		/// Przebieg podstawowy:   
		///     
		/// 1.       Pracownik znajduje konto klienta w systemie.   
		/// 2.       Pracownik dodaje notatkê.   
		/// 3.       Pracownik zatwierdza notatkê.   
		///     
		/// Wynik: Dodano notatkê do konta klienta.   
		/// </summary>
		public: void dodaj_notatkê();

		/// <summary>
		/// Warunki pocz¹tkowe: Pracownik jest zalogowany w systemie zgodnie z wypo¿ycz ksi¹zke.  
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Klient wypo¿ycza ksi¹¿kê zgodnie z wypo¿ycz ksi¹zke.  
		/// 2.      Pracownik wprowadza dane ksi¹¿ki.  
		/// 3.      Pracownik wprowadza dane klienta.  
		/// 4.      Pracownik zatwierdza wypo¿yczenie.  
		///    
		/// Wynik: Dodano wypo¿yczenie do bazy wypo¿yczeni.   
		///    
		///    
		/// </summary>
		public: void dodaj_wypo¿yczenie();

		/// <summary>
		/// Warunki pocz¹tkowe: Konto pracownika jest dodane do systemu.
		/// Przebieg podstawowy nr 1:  
		///    
		/// 1.      Pracownik wpisuje login.  
		/// 2.      Pracownik wpisuje has³o.  
		/// 3.      Weryfikacja danych.  
		///  
		/// 
		/// Wynik: Pracownik zosta³ zalogowany w systemie.   
		/// </summary>
		public: void zaloguj_siê();

		public: void obs³u¿_klienta_();

		public: Pracownik_standardowy();
	};
}

#endif
