#include <string>
using namespace std;

#include "Ksi¹¿ka.h"
#include "Ocena_i_komentarz.h"

Magazyn_Ksi¹zek::Ksi¹¿ka::Ksi¹¿ka(string tytu³, int id, int isbn, string status, string opis)
{
	Magazyn_Ksi¹zek::Ksi¹¿ka::_tytu³ = tytu³;
	Magazyn_Ksi¹zek::Ksi¹¿ka::_iD = id;
	Magazyn_Ksi¹zek::Ksi¹¿ka::_iSBN = isbn;
	Magazyn_Ksi¹zek::Ksi¹¿ka::_status = status;
	Magazyn_Ksi¹zek::Ksi¹¿ka::_opis = opis;
}
