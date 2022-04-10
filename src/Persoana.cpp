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
    tratare_exceptii_nume_prenume();
}


Persoana::Persoana(Persoana& other) : nume(other.nume), prenume(other.prenume), dob(other.dob), ID_Persoana(other.ID_Persoana)
{

}

Persoana::Persoana(std::string str, char del): ID_Persoana(nextID_Persoana++)
{
    std::string temp = "";
    std::string date[3];
    int c=0;
    for(int i=0; i<(int)str.size(); i++)
    {
        if(str[i] != del)
        {
            temp += str[i];
        }
        else
        {
            date[c]=temp;
            c++;
            temp = "";
        }
    }
    date[c]=temp;
    nume=date[0];
    prenume=date[1];
    dob=date[2];
    tratare_exceptii_nume_prenume();
}


void Persoana::tratare_exceptii_nume_prenume()
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

    //tratarea cazului in care data nasterii nu este de forma ZZ.LL.AAAA
    //ACEST CAZ TREBUIE TRATAT LA CITIRE + CAND AVEM CARACTERE DIFERITE DE LITERE IN NUME
}

std::istream& operator>>(std::istream& i, Persoana& pers)
{
    i>>pers.nume>>pers.prenume>>pers.dob;
    pers.tratare_exceptii_nume_prenume();
    return i;
}

std::ostream& operator<<(std::ostream& o, Persoana& pers)
{
    o<<pers.nume<<' '<<pers.prenume<<", data nasterii: "<<pers.dob;
    return o;
}

Persoana::~Persoana()
{
    //dtor
}
