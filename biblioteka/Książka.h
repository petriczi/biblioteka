#include <string>
using namespace std;

#ifndef __Ksi��ka_h__
#define __Ksi��ka_h__

// #include "Ocena_i_komentarz.h"

namespace Magazyn_Ksi�zek
{
	class Ksi��ka;
}
namespace Powiadomienia
{
	class Ocena_i_komentarz;
}

namespace Magazyn_Ksi�zek
{
	class Ksi��ka
	{
		public: string _tytu�;
	public: int _iD;
	public: int _iSBN;
	public: string _status;
	public: string _opis;
		public: Powiadomienia::Ocena_i_komentarz* _dotyczy;
		public: Ksi��ka(string tytu�, int id, int isbn,string status,string opis);

	};
}

#endif
