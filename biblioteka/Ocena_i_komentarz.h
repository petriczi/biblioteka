#include <string>
using namespace std;

#ifndef __Ocena_i_komentarz_h__
#define __Ocena_i_komentarz_h__

// #include "Klient_zarejestrowany.h"
// #include "Ksi��ka.h"

namespace Baza_Klient�w
{
	class Klient_zarejestrowany;
}
namespace Magazyn_Ksi�zek
{
	class Ksi��ka;
}
namespace Powiadomienia
{
	class Ocena_i_komentarz;
}

namespace Powiadomienia
{
	class Ocena_i_komentarz
	{
		private: double _ocena;
		private: string _komentarz;
		public: Magazyn_Ksi�zek::Ksi��ka* _dotyczy;
		public: Baza_Klient�w::Klient_zarejestrowany* _wystawia;
	};
}

#endif
