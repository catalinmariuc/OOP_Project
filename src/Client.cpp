#include "Client.h"

Client::Client():Persoana()
{
    //ctor
}

Client::Client(Persoana& this_Persoana):Persoana(this_Persoana)
{

}
Client::Client(Client& other):Persoana()
{

}

Client::~Client()
{
    //dtor
}

