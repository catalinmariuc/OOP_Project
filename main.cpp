#include <iostream>
#include<conio.h>
#include"Persoana.h"
#include"ContBancar.h"
#include"Exceptie.h"

int main()
{
    try
    {
        throw Exceptie("Test", "Test");
        getch();
    }
    catch(Exceptie e)
    {
        std::cerr<<e;
    }
    return 0;
}
