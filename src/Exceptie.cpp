#include "Exceptie.h"

Exceptie::Exceptie(std::string tip, std::string mesaj):tip(tip), mesaj(mesaj)
{

}
std::ostream& operator<<(std::ostream& o, Exceptie& e)
{
    o<<"Tipul exceptiei: " + e.tip + "\nMesajul exceptiei: " + e.mesaj;
    return o;
}

Exceptie::~Exceptie()
{
    //dtor
}
