#include"bancaIO.h"

Persoana* get_Persoane_file(std::string numefis)
{
    std::ifstream fin(numefis);
    int nr;
    fin>>nr;
    Persoana* rPersoane = new Persoana[nr];
    for(auto i=0; i<nr; i++)
        fin>>rPersoane[i];
    fin.close();
    return rPersoane;
}
ContBancar* get_ConturiBancare_file(std::string numefis)
{

}

//void append_Persoana_file(Persoana& pers, std::string numefis);
//void append_ContBancar_file(ContBancar& cb, std::string numefis);

void set_Persoane_file(Persoana* persoane, std::string numefis)
{

}
void set_ConturiBancare_file(ContBancar* conturi, std::string numefis)
{

}
void afisare_Persoane_console(Persoana* persoane)
{
    for(auto i=0; i<Persoana::nextID_Persoana; i++)
        std::cout<<persoane[i]<<std::endl;
}
