#ifndef CLIENT_H
#define CLIENT_H

#define MAX_ACCOUNTS 10

#include <Persoana.h>


class Client : public Persoana
{
    public:
        int conturi[MAX_ACCOUNTS];

        Client();
        Client(Persoana& this_Persoana);
        Client(Client& other);

        bool is_Client() {return true;}
        bool is_Angajat() {return false;}
        virtual ~Client();
};

#endif // CLIENT_H
