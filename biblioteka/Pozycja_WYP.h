
#ifndef __Pozycja_WYP_h__
#define __Pozycja_WYP_h__

// #include "Ksi��ka.h"
// #include "wypo�yczenie.h"

namespace Magazyn_Ksi�zek
{
	class Ksi��ka;
}
namespace Zarz�dzanie_ksi�zkami
{
	class wypo�yczenie;
	class Pozycja_WYP;
}

namespace Zarz�dzanie_ksi�zkami
{
	class Pozycja_WYP
	{
		private: int _ilo��;
		private: int _termin;
		public: Zarz�dzanie_ksi�zkami::wypo�yczenie* _sk�ada_si�_z;
		public: Magazyn_Ksi�zek::Ksi��ka* _zawiera;
	};
}

#endif
