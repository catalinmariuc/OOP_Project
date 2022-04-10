#define FISIER_PERSOANE "file_persoane.txt"

#include <iostream>
#include<conio.h>
#include<fstream>

#include"Persoana.h"
#include"Client.h"
#include"Angajat.h"
#include"ContBancar.h"
#include"Exceptie.h"

#include"bancaIO.h"

int main()
{

    try
    {
        Persoana* vector_persoane = get_Persoane_file(FISIER_PERSOANE);
        afisare_Persoane_console(vector_persoane);

    }
    catch(Exceptie e)
    {
        std::cerr<<e;
    }
    return 0;
}
