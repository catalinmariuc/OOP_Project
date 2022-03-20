#include <iostream>
#include<conio.h>
#include"Persoana.h"
#include"ContBancar.h"
#include"Exceptie.h"

int main()
{
    Persoana p("mariuc-rebenciuc", "catalin", "09.07.1999");
    std::cout<<p;
    char a='a';
    std::cout<<(char)(a-32);
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
