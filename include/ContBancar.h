#ifndef CONTBANCAR_H
#define CONTBANCAR_H

#include <Persoana.h>


class ContBancar : public Persoana
{
    private:
        ContBancar();//constructor implicit // nu ar trebui sa fie folosit in afara clasei
        std::string tip, valuta;
        const int ID_ContBancar;
        unsigned long long int sold;

        static int nextID_ContBancar;

    public:
        ContBancar(Persoana& this_persoana, std::string denumire, std::string valuta, unsigned long long int sold);//constructor cu parametrii

        virtual ~ContBancar();

    protected:


};

#endif // CONTBANCAR_H
