#include <exception>
using namespace std;

#ifndef __obsluga_czytelnika_h__
#define __obsluga_czytelnika_h__

namespace Rozliczenia
{
	class obsluga_czytelnika;
}

namespace Rozliczenia
{
	class obsluga_czytelnika
	{

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
		public: void nalicz_kare();

		public: void wy�lij_przypomnienie();
	};
}

#endif
