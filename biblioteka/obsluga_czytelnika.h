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
		public: void nalicz_kare();

		public: void wyœlij_przypomnienie();
	};
}

#endif
