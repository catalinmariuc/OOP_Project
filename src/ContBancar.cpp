#include "ContBancar.h"

int ContBancar::nextID_ContBancar=0;

ContBancar::ContBancar(): ID_ContBancar(nextID_ContBancar++)
{
    //ctor
    tip = "debit";
    valuta = "RON";
    sold = 0;
}

ContBancar::ContBancar(Persoana& this_persoana, std::string tip, std::string valuta, unsigned long long int sold):Persoana(this_persoana), tip(tip), valuta(valuta), sold(sold), ID_ContBancar(nextID_ContBancar++)
{

}

ContBancar::~ContBancar()
{
    //dtor
}
