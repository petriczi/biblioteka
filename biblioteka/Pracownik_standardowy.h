#include <exception>
#include <string>
using namespace std;

#ifndef __Pracownik_standardowy_h__
#define __Pracownik_standardowy_h__

namespace Zarz�dzanie_bibliotek�
{
	class Pracownik_standardowy;
}

namespace Zarz�dzanie_bibliotek�
{
	class Pracownik_standardowy
	{
		private: string _imie;
		private: string _nazwisko;

		/// <summary>
		/// Warunki pocz�tkowe: Pracownik jest zalogowany w systemie..  
		/// Przebieg podstawowy:  
		///    
		/// 1.      Pracownik znajduje konto klienta w systemie.  
		/// 2.      Pracownik dodaje notatk�.  
		/// 3.      Pracownik zatwierdza notatk�.  
		///    
		/// Wynik: Dodano notatk� do konta klienta.   
		/// </summary>
		public: void dodaj_ksi��k�();

		/// <summary>
		/// Przebieg podstawowy:   
		///     
		/// 1.       Pracownik znajduje wypo�yczenie w bazie wypo�yczen.   
		/// 2.       Pracownik usuwa dane wypo�yczenia.   
		/// 3.       Pracownik zatwierdza usuni�cie wypo�yczenia.   
		///     
		/// Wynik: Z edytowano wypo�yczenie w bazie wypo�ycze�.   
		/// </summary>
		public: void usu�_ksi��k�();

		/// <summary>
		/// Warunki pocz�tkowe: Pracownik jest zalogowany w systemie, w bazie wypo�yczeni istnieje wypo�yczenie dodane zgodnie z wypo�ycz ksi�zk�.
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Pracownik znajduje wypo�yczenie w bazie wypo�yczeni.  
		/// 2.      Pracownik edytuje dane wypo�yczenia.  
		/// 3.      Pracownik zatwierdza wprowadzone zmiany.  
		///    
		/// Wynik: Z edytowano wypo�yczenie w bazie wypo�ycze�.   
		///    
		/// </summary>
		public: void edytuj_wypo�yczenie();

		/// <summary>
		/// Warunki pocz�tkowe: Pracownik jest zalogowany w systemie, w bazie wypo�yczeni istnieje wypo�yczenie dodane zgodnie z wypo�ycz ksi��k�.  
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Pracownik znajduje wypo�yczenie w bazie wypo�ycze�.  
		/// 2.      Pracownik usuwa dane wypo�yczenia.  
		/// 3.      Pracownik zatwierdza usuni�cie wypo�yczenia.  
		///    
		/// Wynik: Z edytowano wypo�yczenie w bazie wypo�ycze�.   
		/// </summary>
		public: void usu�_wypo�yczenie();

		/// <summary>
		/// Przebieg podstawowy:   
		///     
		/// 1.       Pracownik znajduje konto klienta w systemie.   
		/// 2.       Pracownik dodaje notatk�.   
		/// 3.       Pracownik zatwierdza notatk�.   
		///     
		/// Wynik: Dodano notatk� do konta klienta.   
		/// </summary>
		public: void dodaj_notatk�();

		/// <summary>
		/// Warunki pocz�tkowe: Pracownik jest zalogowany w systemie zgodnie z wypo�ycz ksi�zke.  
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Klient wypo�ycza ksi��k� zgodnie z wypo�ycz ksi�zke.  
		/// 2.      Pracownik wprowadza dane ksi��ki.  
		/// 3.      Pracownik wprowadza dane klienta.  
		/// 4.      Pracownik zatwierdza wypo�yczenie.  
		///    
		/// Wynik: Dodano wypo�yczenie do bazy wypo�yczeni.   
		///    
		///    
		/// </summary>
		public: void dodaj_wypo�yczenie();

		/// <summary>
		/// Warunki pocz�tkowe: Konto pracownika jest dodane do systemu.
		/// Przebieg podstawowy nr 1:  
		///    
		/// 1.      Pracownik wpisuje login.  
		/// 2.      Pracownik wpisuje has�o.  
		/// 3.      Weryfikacja danych.  
		///  
		/// 
		/// Wynik: Pracownik zosta� zalogowany w systemie.   
		/// </summary>
		public: void zaloguj_si�();

		public: void obs�u�_klienta_();

		public: Pracownik_standardowy();
	};
}

#endif
