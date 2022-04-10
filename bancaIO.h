#ifndef BANCAIO_H_INCLUDED
#define BANCAIO_H_INCLUDED

#include<fstream>
#include<string>

#include"Persoana.h"
#include"ContBancar.h"


/*IMPORTANT!!! FISIERELE TREBUIE SA AIBA FORMATUL:
n
data 1
data 2
...
data n

UNDE n ESTE NUMARUL DE RANDURI CARE CONTIN DATE
*/

Persoana* get_Persoane_file(std::string numefis);
ContBancar* get_ConturiBancare_file(std::string numefis);

//void append_Persoana_file(Persoana& pers, std::string numefis);
//void append_ContBancar_file(ContBancar& cb, std::string numefis);

void set_Persoane_file(Persoana* persoane, std::string numefis);
void set_ConturiBancare_file(ContBancar* conturi, std::string numefis);

void afisare_Persoane_console(Persoana* persoane);



#endif // BANCAIO_H_INCLUDED
