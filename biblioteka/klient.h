#include <exception>
#include <string>
using namespace std;

#ifndef __klient_h__
#define __klient_h__

namespace Baza_Klient�w
{
	class klient;
}

namespace Baza_Klient�w
{
	/**
	 * cdv
	 */
	class klient
	{
		private: int _pESEL;
		private: string _imi�;
		private: string _nazwisko;
		private: string _adres;

		/// <summary>
		/// Przebieg podstawowy:   
		/// 1.       Klient loguje si� w systemie za po�rednictwem terminala w bibliotece zgodnie z UC_006.   
		/// 2.       Klient wybiera ksi��k� do wypo�yczenia.   
		/// 3.       Pracownik standardowy sprawdza dost�pno�� ksi��ki w systemie.   
		/// 4.       Klient potwierdza wypo�yczenie i odbiera ksi��k�.   
		/// 5.       Pracownik standardowy dodaje wypo�yczenie zgodnie z UC_017.   
		///     
		/// Przebieg alternatywny nr 1:   
		/// 6.       Klient zarezerwowa� ksi��k� zgodnie z UC_002.   
		/// 7.       Klient loguje si� w systemie za po�rednictwem terminala w bibliotece.   
		/// 8.       Klient potwierdza wypo�yczenie i odbiera ksi��k�.   
		/// 9.       Pracownik standardowy dodaje wypo�yczenie zgodnie z UC_017.   
		///     
		/// Przebieg alternatywny nr 2(dla klient�w niezarejestrowanych):   
		/// 10.   Klient okazuje wymagany dokument to�samo�ci pracownikowi biblioteki.   
		/// 11.   Punkty 2-5: jak w przebiegu podstawowym.   
		///     
		///     
		///     
		/// Wynik: Wypo�yczenie ksi��ki.   
		/// </summary>
		public: void wyporzycz_ksi��k�();

		/// <summary>
		/// Przebieg podstawowy:   
		/// 1.       Klient oddaje ksi��k� pracownikowi standardowemu.   
		/// 2.       Je�li zosta�a naliczona kara, pracownik informuje o tym klienta.   
		/// 3.       Pracownik usuwa wypo�yczenie zgodnie z UC_019.   
		/// 4.       Pracownik odk�ada ksi��k� na jej miejsce.   
		///     
		/// Wynik: Zarezerwowano ksi��k�.   
		/// </summary>
		public: void zwr��_ksi��k�();

		/// <summary>
		/// Przebieg podstawowy (klient zarejestrowany):   
		/// 1.       System kilka dni przed przekroczeniem terminu zwrotu ksi��ki wysy�a przypomnienie mailowe do u�ytkownika.   
		/// 2.       System po przekroczeniu terminu zwrotu ksi��ki wysy�a maila z powiadomieniem.   
		/// 3.       Po ka�dym kolejnym tygodniu system nalicza kar� w okre�lonej wysoko�ci i wysy�a kolejne powiadomienia.   
		/// 4.       Po okre�lonym przez administratora czasie system wysy�a specjalne przypomnienia do pracownika biblioteki.   
		/// 5.       Po zap�aceniu kary pracownik wprowadza do systemu informacj� o uregulowaniu nale�no�ci i zwrocie ksi��ki.   
		///     
		///     
		/// Przebieg alternatywny (klient niezarejestrowany):   
		///     
		/// 1.       System kilka dni przed okre�lonym terminem zwrotu wysy�a powiadomienie dla pracownika biblioteki.   
		/// 2.       System po przekroczeniu terminu zwrotu ksi��ki wysy�a ponownie powiadomienie do pracownika biblioteki, aby podj�� okre�lone dzia�ania.   
		/// 3.       Po uregulowaniu zap�aty pracownik wprowadza do systemu informacj� o zwrocie ksi��ki.   
		///     
		/// Wynik: Uregulowanie nale�no�ci klienta.   
		/// </summary>
		public: void zap�a�_kar�();

		public: void zaloguj_sie();



		public: klient();

	};

}

#endif
