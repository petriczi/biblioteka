#include <exception>
#include <string>
using namespace std;

#ifndef __klient_h__
#define __klient_h__

namespace Baza_Klientów
{
	class klient;
}

namespace Baza_Klientów
{
	/**
	 * cdv
	 */
	class klient
	{
		private: int _pESEL;
		private: string _imiê;
		private: string _nazwisko;
		private: string _adres;

		/// <summary>
		/// Przebieg podstawowy:   
		/// 1.       Klient loguje siê w systemie za poœrednictwem terminala w bibliotece zgodnie z UC_006.   
		/// 2.       Klient wybiera ksi¹¿kê do wypo¿yczenia.   
		/// 3.       Pracownik standardowy sprawdza dostêpnoœæ ksi¹¿ki w systemie.   
		/// 4.       Klient potwierdza wypo¿yczenie i odbiera ksi¹¿kê.   
		/// 5.       Pracownik standardowy dodaje wypo¿yczenie zgodnie z UC_017.   
		///     
		/// Przebieg alternatywny nr 1:   
		/// 6.       Klient zarezerwowa³ ksi¹¿kê zgodnie z UC_002.   
		/// 7.       Klient loguje siê w systemie za poœrednictwem terminala w bibliotece.   
		/// 8.       Klient potwierdza wypo¿yczenie i odbiera ksi¹¿kê.   
		/// 9.       Pracownik standardowy dodaje wypo¿yczenie zgodnie z UC_017.   
		///     
		/// Przebieg alternatywny nr 2(dla klientów niezarejestrowanych):   
		/// 10.   Klient okazuje wymagany dokument to¿samoœci pracownikowi biblioteki.   
		/// 11.   Punkty 2-5: jak w przebiegu podstawowym.   
		///     
		///     
		///     
		/// Wynik: Wypo¿yczenie ksi¹¿ki.   
		/// </summary>
		public: void wyporzycz_ksi¹¿kê();

		/// <summary>
		/// Przebieg podstawowy:   
		/// 1.       Klient oddaje ksi¹¿kê pracownikowi standardowemu.   
		/// 2.       Jeœli zosta³a naliczona kara, pracownik informuje o tym klienta.   
		/// 3.       Pracownik usuwa wypo¿yczenie zgodnie z UC_019.   
		/// 4.       Pracownik odk³ada ksi¹¿kê na jej miejsce.   
		///     
		/// Wynik: Zarezerwowano ksi¹¿kê.   
		/// </summary>
		public: void zwróæ_ksi¹¿kê();

		/// <summary>
		/// Przebieg podstawowy (klient zarejestrowany):   
		/// 1.       System kilka dni przed przekroczeniem terminu zwrotu ksi¹¿ki wysy³a przypomnienie mailowe do u¿ytkownika.   
		/// 2.       System po przekroczeniu terminu zwrotu ksi¹¿ki wysy³a maila z powiadomieniem.   
		/// 3.       Po ka¿dym kolejnym tygodniu system nalicza karê w okreœlonej wysokoœci i wysy³a kolejne powiadomienia.   
		/// 4.       Po okreœlonym przez administratora czasie system wysy³a specjalne przypomnienia do pracownika biblioteki.   
		/// 5.       Po zap³aceniu kary pracownik wprowadza do systemu informacjê o uregulowaniu nale¿noœci i zwrocie ksi¹¿ki.   
		///     
		///     
		/// Przebieg alternatywny (klient niezarejestrowany):   
		///     
		/// 1.       System kilka dni przed okreœlonym terminem zwrotu wysy³a powiadomienie dla pracownika biblioteki.   
		/// 2.       System po przekroczeniu terminu zwrotu ksi¹¿ki wysy³a ponownie powiadomienie do pracownika biblioteki, aby podj¹æ okreœlone dzia³ania.   
		/// 3.       Po uregulowaniu zap³aty pracownik wprowadza do systemu informacjê o zwrocie ksi¹¿ki.   
		///     
		/// Wynik: Uregulowanie nale¿noœci klienta.   
		/// </summary>
		public: void zap³aæ_karê();

		public: void zaloguj_sie();



		public: klient();

	};

}

#endif
