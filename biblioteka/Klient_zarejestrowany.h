#include <exception>
#include <string>
using namespace std;

#ifndef __Klient_zarejestrowany_h__
#define __Klient_zarejestrowany_h__

#include "klient.h"
// #include "Ocena_i_komentarz.h"

namespace Baza_Klientów
{
	// class klient;
	class Klient_zarejestrowany;
}
namespace Powiadomienia
{
	class Ocena_i_komentarz;
}

namespace Baza_Klientów
{
	class Klient_zarejestrowany: public Baza_Klientów::klient
	{
		private: string _login;
		private: string _has³o;
		public: Powiadomienia::Ocena_i_komentarz* _wystawia;

		/// <summary>
		/// Warunki pocz¹tkowe: Klient jest zarejestrowany w systemie zgodnie z "Zarejestruj klienta".  
		///    
		/// Przebieg podstawowy:  
		/// 1.      Klient loguje siê w systemie za poœrednictwem strony internetowej zgodnie z Zarejestruj klienta.  
		/// 2.      Klient wyszukuje z listy wybrany tytu³.  
		/// 3.      Klient wybiera termin odebrania ksi¹¿ki.  
		/// 4.      Klient wybiera termin zwrotu ksi¹¿ki.  
		/// 5.      Klient potwierdza rezerwacjê.  
		///    
		/// Wynik: Zarezerwowano ksi¹¿kê.  
		/// </summary>
		public: void zarezerwuj_ksi¹¿kê();

		/// <summary>
		/// Warunki pocz¹tkowe: Klient jest zarejestrowany w systemie zgodnie z zarejestruj klienta i wypo¿yczy³ ksi¹¿kê zgodnie z wypo¿ycz ksi¹zke.  
		///    
		/// Przebieg podstawowy:  
		/// 1.      Klient loguje siê w systemie za poœrednictwem strony internetowej.  
		/// 2.      Klient przechodzi do sekcji przeczytanych ksi¹¿ek.  
		/// 3.      Klient wybiera tytu³.  
		/// 4.      Klient wystawia wystawia komentarz.  
		/// 5.      Klient wystawia ocenê w skali 0-10.  
		/// 6.      Klient potwierdza komentarz i ocenê.  
		///    
		/// Wynik: Dodanie oceny i komentarza do profilu ksi¹¿ki w systemie.  
		/// </summary>
		public: void oceñ_ksi¹¿kê();

		/// <summary>
		///    
		/// Warunki pocz¹tkowe: Klient jest zarejestrowany w systemie zgodnie z zarejestruj klienta.  
		///    
		/// Przebieg podstawowy (klient zarejestrowany):  
		/// 1.      Klient loguje siê na swoje konto w systemie za pomoc¹ strony internetowej, lub terminala w bibliotece zgodnie z zaloguj do systemu.  
		/// 2.      System wyœwietla bazê ksi¹¿ek i okno wyszukiwania.  
		/// 3.      Klient wyszukuje wybran¹ pozycjê.  
		/// 4.      Klient wybiera opcjê pokazania szczegó³owych informacji o ksi¹¿ce.  
		/// 5.      System wyœwietla okreœlone przez administratora informacjê np. krótki opis, oceny i komentarze u¿ytkowników i resztê informacji podstawowych.  
		///    
		///    
		///    
		/// Wynik: Wyœwietlenie informacji o ksi¹¿ce.  
		/// </summary>
		public: void wyœwietl_informacje_o_ksi¹¿ce();

		/// <summary>
		/// Warunki pocz¹tkowe: Konto u¿ytkownika jest dodane zgodnie z zarejestruj klienta.  
		/// Przebieg podstawowy: 
		///                 1.    Klient wpisuje login.   
		///                 2.    Klient wpisuje has³o.  
		///                 3.    Weryfikacja danych.  
		///    
		/// Przebieg alternatywny:  
		///    
		/// 1.      Has³o zosta³o 3 razy Ÿle wpisane.  
		/// 2.      Konto zostaje zablokowane.  
		///    
		/// Wynik: Pracownik lub klient zosta³ zalogowany w systemie.   
		///    
		/// </summary>
		public: void zaloguj_siê();
	};
}

#endif
