#include <string>
using namespace std;

#ifndef __Ocena_i_komentarz_h__
#define __Ocena_i_komentarz_h__

// #include "Klient_zarejestrowany.h"
// #include "Ksi¹¿ka.h"

namespace Baza_Klientów
{
	class Klient_zarejestrowany;
}
namespace Magazyn_Ksi¹zek
{
	class Ksi¹¿ka;
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
		public: Magazyn_Ksi¹zek::Ksi¹¿ka* _dotyczy;
		public: Baza_Klientów::Klient_zarejestrowany* _wystawia;
	};
}

#endif
