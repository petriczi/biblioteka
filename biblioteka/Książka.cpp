#include <string>
using namespace std;

#include "Ksi��ka.h"
#include "Ocena_i_komentarz.h"

Magazyn_Ksi�zek::Ksi��ka::Ksi��ka(string tytu�, int id, int isbn, string status, string opis)
{
	Magazyn_Ksi�zek::Ksi��ka::_tytu� = tytu�;
	Magazyn_Ksi�zek::Ksi��ka::_iD = id;
	Magazyn_Ksi�zek::Ksi��ka::_iSBN = isbn;
	Magazyn_Ksi�zek::Ksi��ka::_status = status;
	Magazyn_Ksi�zek::Ksi��ka::_opis = opis;
}
