#ifndef PERSOANA_H
#define PERSOANA_H

#include<string>
#include<iostream>

class Persoana
{
    private:
        std::string nume, prenume, dob; //dob = date of birth
        static int nextID_Persoana;
        const int ID_Persoana; //fiind const trebuie initializat in lista de initializare

    public:
        Persoana(); //constructor implicit //folosit de clasa ContBancar
        Persoana(std::string nume, std::string prenume, std::string dob); //constructor cu parametrii
        Persoana(Persoana& other); // constructor de copiere
        friend std::ostream& operator<<(std::ostream& o, Persoana p);
        virtual ~Persoana();


    protected:



};

#endif // PERSOANA_H
