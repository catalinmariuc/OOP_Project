#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <Persoana.h>


class Angajat : public Persoana
{
    public:
        Angajat();
        virtual ~Angajat();
        bool is_Client() {return false;};
        bool is_Angajat() {return true;};

    protected:

    private:
};

#endif // ANGAJAT_H
