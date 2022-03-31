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

std::ostream& operator<<(std::ostream& o, ContBancar c)
{
    o<<c.ID_ContBancar<<". "<<c.tip<<" "<<c.sold<<c.valuta;
    return o;
}

int ContBancar::depune_numerar(int valoare)
{
    sold+=valoare;
    return valoare;
}

int ContBancar::retrage_numerar(int valoare)
{
    sold-=valoare;
    return valoare;
}

ContBancar::~ContBancar()
{
    //dtor
}
