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
    //tratarea cazului in care numele incepe cu litera mica
    std::size_t sep_pos = 0;
    if(int(this->nume[sep_pos])>=97 && int(this->nume[sep_pos]<=122))
            this->nume[sep_pos]-=32;

    while (sep_pos!=std::string::npos)
    {
        sep_pos=nume.find_first_of("- ",sep_pos+1);
        if(int(this->nume[sep_pos+1])>=97 && int(this->nume[sep_pos+1]<=122))
            this->nume[sep_pos+1]-=32;
    }

    //tratarea cazului in care prenumele incepe cu litera mica
    sep_pos = 0;
    if(int(this->prenume[sep_pos])>=97 && int(this->prenume[sep_pos]<=122))
            this->prenume[sep_pos]-=32;

    while (sep_pos!=std::string::npos)
    {
        sep_pos=prenume.find_first_of("- ",sep_pos+1);
        if(int(this->prenume[sep_pos+1])>=97 && int(this->prenume[sep_pos+1]<=122))
            this->prenume[sep_pos+1]-=32;
    }
}


Persoana::Persoana(Persoana& other) : nume(other.nume), prenume(other.prenume), dob(other.dob), ID_Persoana(other.ID_Persoana)
{

}

std::ostream& operator<<(std::ostream& o, Persoana p)
{
    o<<p.ID_Persoana<<". "<<p.nume<<" "<<p.prenume<<" "<<p.dob<<"\n";
    return o;
}

Persoana::~Persoana()
{
    //dtor
}
