
#ifndef __Pozycja_WYP_h__
#define __Pozycja_WYP_h__

// #include "Ksi¹¿ka.h"
// #include "wypo¿yczenie.h"

namespace Magazyn_Ksi¹zek
{
	class Ksi¹¿ka;
}
namespace Zarz¹dzanie_ksi¹zkami
{
	class wypo¿yczenie;
	class Pozycja_WYP;
}

namespace Zarz¹dzanie_ksi¹zkami
{
	class Pozycja_WYP
	{
		private: int _iloœæ;
		private: int _termin;
		public: Zarz¹dzanie_ksi¹zkami::wypo¿yczenie* _sk³ada_siê_z;
		public: Magazyn_Ksi¹zek::Ksi¹¿ka* _zawiera;
	};
}

#endif
