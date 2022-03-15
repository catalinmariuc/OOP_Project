#include "Persoana.h"

Persoana::Persoana()
{
    nume="DEFAULT_NUME";
    prenume="DEFAULT_PRENUME";
    dob="01.01.2000";
}

Persoana::Persoana(std::string nume, std::string prenume, std::string dob) : nume(nume), prenume(prenume), dob(dob)
{

}

Persoana::Persoana(Persoana& other) : nume(other.nume), prenume(other.prenume), dob(other.dob)
{

}
Persoana::~Persoana()
{
    //dtor
}
