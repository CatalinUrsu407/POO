#ifndef CUTIE_PIESE_GALBENE_HPP
#define CUTIE_PIESE_GALBENE_HPP

#include "baza.hpp"
#include "piesa_galbena.hpp"

class Cutie_piese_galbene : public Baza
{
    int dim;
    Piesa_galbena *v; //pretul pentru o cutie_piese_galbene este suma pieselor din vector

public:
    Cutie_piese_galbene();
    Cutie_piese_galbene(const int, const Piesa_galbena *);
    Cutie_piese_galbene(const Cutie_piese_galbene &);
    ~Cutie_piese_galbene();

    Cutie_piese_galbene &operator=(const Cutie_piese_galbene &);

    int getPret();
    void afisare();
};

#endif