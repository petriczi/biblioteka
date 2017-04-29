#include <string>
using namespace std;

#ifndef __Ksi¹¿ka_h__
#define __Ksi¹¿ka_h__

// #include "Ocena_i_komentarz.h"

namespace Magazyn_Ksi¹zek
{
	class Ksi¹¿ka;
}
namespace Powiadomienia
{
	class Ocena_i_komentarz;
}

namespace Magazyn_Ksi¹zek
{
	class Ksi¹¿ka
	{
		public: string _tytu³;
	public: int _iD;
	public: int _iSBN;
	public: string _status;
	public: string _opis;
		public: Powiadomienia::Ocena_i_komentarz* _dotyczy;
		public: Ksi¹¿ka(string tytu³, int id, int isbn,string status,string opis);

	};
}

#endif
