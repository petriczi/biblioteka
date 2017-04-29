#include <exception>
#include <string>
using namespace std;

#ifndef __wypo�yczenie_h__
#define __wypo�yczenie_h__

// #include "klient.h"
// #include "Pracownik_standardowy.h"
// #include "Pozycja_WYP.h"

namespace Baza_Klient�w
{
	class klient;
}
namespace Zarz�dzanie_bibliotek�
{
	class Pracownik_standardowy;
}
namespace Zarz�dzanie_ksi�zkami
{
	class Pozycja_WYP;
	class wypo�yczenie;
}

namespace Zarz�dzanie_ksi�zkami
{
	class wypo�yczenie
	{
		private: string _data;
		private: string _status;
		private: string _notatka;
		public: Baza_Klient�w::klient* _wykonuje;
		public: Zarz�dzanie_ksi�zkami::Pozycja_WYP* _sk�ada_si�_z;
		public: Zarz�dzanie_bibliotek�::Pracownik_standardowy* _wypo�ycza;

		public: wypo�yczenie();
	};
}

#endif
