#ifndef PERSOANA_H
#define PERSOANA_H

#include<string>
#include<string.h>
#include<iostream>
#include<vector>
#include<fstream>

class Persoana
{
    private:
        std::string nume, prenume, dob; //dob = date of birth
        static int nextID_Persoana;
        const int ID_Persoana; //fiind const trebuie initializat in lista de initializare

        void tratare_exceptii_nume_prenume();//functie utilitara pentru a corecta formatul numelui si a prenumelui la apelul costructorului

    public:
        Persoana(); //constructor implicit //folosit de clasa ContBancar
        Persoana(std::string nume, std::string prenume, std::string dob); //constructor cu parametrii
        Persoana(Persoana& other); // constructor de copiere
        Persoana(std::string sir_constructie, char del=',');//constructor pt citire din fisier

        //static std::vector<Persoana> get_persoane_file(std::string nume_fisier); //nu mai este necesara, inlocuita in clasa client si angajat
        virtual bool is_Client(){return false;};
        virtual bool is_Angajat(){return false;};

        friend std::ostream& operator<<(std::ostream& o, Persoana& pers);
        friend std::istream& operator>>(std::istream& i, Persoana& pers);
        friend void afisare_Persoane_console(Persoana* persoane);


        virtual ~Persoana();


    protected:



};

#endif // PERSOANA_H
