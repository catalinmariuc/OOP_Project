#include <iostream>
#include<conio.h>
#include"Persoana.h"
#include"ContBancar.h"
#include"Exceptie.h"

int main()
{
    Persoana p("popescu-popa", "ion alexandru", "09.07.1999");
    Persoana pers("popa,andrei,09.07.1999", ',');
    Persoana pers2("Mariuc,catalin,09.07.1999");

    std::cout<<p<<std::endl<<pers<<std::endl<<pers2;
    /*try
    {
        throw Exceptie("Test", "Test");
    }
    catch(Exceptie e)
    {
        std::cerr<<e;
    }*/
    return 0;
}
