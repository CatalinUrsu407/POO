#ifndef PIESA_HPP
#define PIESA_HPP

#include "baza.hpp"

class Piesa: public Baza
{
protected:
    int pret;
public:
    Piesa();
    Piesa(const int);
    Piesa(const Piesa&);

    int getPret();
    void afisare();
};

#endif