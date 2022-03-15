#include "ContBancar.h"

int ContBancar::nextID_ContBancar=0;

ContBancar::ContBancar(): ID_ContBancar(nextID_ContBancar++)
{
    //ctor
}

ContBancar::ContBancar(Persoana& this_persoana, std::string denumire, std::string valuta, unsigned long long int sold):Persoana(this_persoana), denumire(denumire), valuta(valuta), sold(sold), ID_ContBancar(nextID_ContBancar++)
{

}

ContBancar::~ContBancar()
{
    //dtor
}
