#ifndef CONTBANCAR_H
#define CONTBANCAR_H

#include <Client.h>


class ContBancar : public Client
{
    private:
        ContBancar();//constructor implicit // nu ar trebui sa fie folosit in afara clasei
        std::string tip, valuta;
        const int ID_ContBancar;
        unsigned long long int sold;

        static int nextID_ContBancar;

    public:
        ContBancar(Client& this_client, std::string denumire, std::string valuta, unsigned long long int sold);//constructor cu parametrii
        int depune_numerar(int valoare);
        int retrage_numerar(int valoare);
        friend std::ostream& operator<<(std::ostream& o, ContBancar c);
        virtual ~ContBancar();

    protected:


};

#endif // CONTBANCAR_H
