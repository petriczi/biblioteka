#include <exception>
using namespace std;

#ifndef __Kara_h__
#define __Kara_h__

// #include "klient.h"
// #include "obsluga_czytelnika.h"

namespace Baza_Klientów
{
	class klient;
}
namespace Rozliczenia
{
	class obsluga_czytelnika;
	class Kara;
}

namespace Rozliczenia
{
	class Kara
	{
		private: double _wysokoœæ;
		public: Baza_Klientów::klient* _unnamed_klient_;
		public: Rozliczenia::obsluga_czytelnika* _generuje;

		/// <summary>
		/// Warunki pocz¹tkowe: Pracownik jest zalogowany na koncie administratora.  
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Administrator wybiera opcjê wprowadzania zmian w naliczaniu kary za nie oddanie ksi¹¿ki.  
		/// 2.      System pyta o zatwierdzenie wprowadzonych danych.  
		/// 3.      Administrator zatwierdza wprowadzone dane.  
		/// 4.      System wprowadza zmiany.  
		///    
		///    
		///    
		/// Wynik: Zmiana wysokoœci kary za nie oddanie ksi¹¿ki na czas w systemie.  
		///    
		/// </summary>
		public: void nalicz();
	};
}

#endif
