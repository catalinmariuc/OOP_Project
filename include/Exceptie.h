#ifndef EXCEPTIE_H
#define EXCEPTIE_H
#include<string>
#include<iostream>

class Exceptie
{
    public:
        Exceptie(std::string tip, std::string mesaj);
        friend std::ostream& operator<<(std::ostream& o, Exceptie& e);
        virtual ~Exceptie();

    protected:

    private:
        std::string tip, mesaj;
};

#endif // EXCEPTIE_H
