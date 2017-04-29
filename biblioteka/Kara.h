#include <exception>
using namespace std;

#ifndef __Kara_h__
#define __Kara_h__

// #include "klient.h"
// #include "obsluga_czytelnika.h"

namespace Baza_Klient�w
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
		private: double _wysoko��;
		public: Baza_Klient�w::klient* _unnamed_klient_;
		public: Rozliczenia::obsluga_czytelnika* _generuje;

		/// <summary>
		/// Warunki pocz�tkowe: Pracownik jest zalogowany na koncie administratora.  
		///    
		/// Przebieg podstawowy:  
		///    
		/// 1.      Administrator wybiera opcj� wprowadzania zmian w naliczaniu kary za nie oddanie ksi��ki.  
		/// 2.      System pyta o zatwierdzenie wprowadzonych danych.  
		/// 3.      Administrator zatwierdza wprowadzone dane.  
		/// 4.      System wprowadza zmiany.  
		///    
		///    
		///    
		/// Wynik: Zmiana wysoko�ci kary za nie oddanie ksi��ki na czas w systemie.  
		///    
		/// </summary>
		public: void nalicz();
	};
}

#endif
