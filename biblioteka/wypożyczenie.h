#include <exception>
#include <string>
using namespace std;

#ifndef __wypożyczenie_h__
#define __wypożyczenie_h__

// #include "klient.h"
// #include "Pracownik_standardowy.h"
// #include "Pozycja_WYP.h"

namespace Baza_Klientów
{
	class klient;
}
namespace Zarządzanie_biblioteką
{
	class Pracownik_standardowy;
}
namespace Zarządzanie_ksiązkami
{
	class Pozycja_WYP;
	class wypożyczenie;
}

namespace Zarządzanie_ksiązkami
{
	class wypożyczenie
	{
		private: string _data;
		private: string _status;
		private: string _notatka;
		public: Baza_Klientów::klient* _wykonuje;
		public: Zarządzanie_ksiązkami::Pozycja_WYP* _składa_się_z;
		public: Zarządzanie_biblioteką::Pracownik_standardowy* _wypożycza;

		public: wypożyczenie();
	};
}

#endif
