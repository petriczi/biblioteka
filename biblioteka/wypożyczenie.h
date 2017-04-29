#include <exception>
#include <string>
using namespace std;

#ifndef __wypo¿yczenie_h__
#define __wypo¿yczenie_h__

// #include "klient.h"
// #include "Pracownik_standardowy.h"
// #include "Pozycja_WYP.h"

namespace Baza_Klientów
{
	class klient;
}
namespace Zarz¹dzanie_bibliotek¹
{
	class Pracownik_standardowy;
}
namespace Zarz¹dzanie_ksi¹zkami
{
	class Pozycja_WYP;
	class wypo¿yczenie;
}

namespace Zarz¹dzanie_ksi¹zkami
{
	class wypo¿yczenie
	{
		private: string _data;
		private: string _status;
		private: string _notatka;
		public: Baza_Klientów::klient* _wykonuje;
		public: Zarz¹dzanie_ksi¹zkami::Pozycja_WYP* _sk³ada_siê_z;
		public: Zarz¹dzanie_bibliotek¹::Pracownik_standardowy* _wypo¿ycza;

		public: wypo¿yczenie();
	};
}

#endif
