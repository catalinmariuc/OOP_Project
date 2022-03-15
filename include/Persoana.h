#ifndef PERSOANA_H
#define PERSOANA_H

#include<string>

class Persoana
{
    public:
        Persoana(); //constructor implicit
        Persoana(std::string nume, std::string prenume, std::string dob); //constructor cu parametrii
        Persoana(Persoana& other); // constructor de copiere
        virtual ~Persoana();


    protected:

    private:
        std::string nume, prenume, dob; //dob = date of birth


};

#endif // PERSOANA_H
