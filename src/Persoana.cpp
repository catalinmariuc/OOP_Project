#include "Persoana.h"

int Persoana::nextID_Persoana=0;

Persoana::Persoana():ID_Persoana(nextID_Persoana++)
{
    nume="DEFAULT_NUME";
    prenume="DEFAULT_PRENUME";
    dob="01.01.2000";
}

Persoana::Persoana(std::string nume, std::string prenume, std::string dob) : nume(nume), prenume(prenume), dob(dob), ID_Persoana(nextID_Persoana++)
{
    //de completat pentru exceptii(nume format incorect, data nasterii format incorect)
}


Persoana::Persoana(Persoana& other) : nume(other.nume), prenume(other.prenume), dob(other.dob), ID_Persoana(other.ID_Persoana)
{

}


Persoana::~Persoana()
{
    //dtor
}
