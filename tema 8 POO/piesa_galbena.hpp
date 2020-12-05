#ifndef PIESA_GALBENA_HPP
#define PIESA_GALBENA_HPP

#include "piesa.hpp"

class Piesa_galbena : public Piesa
{
    int multiplicator; // pretul final pentru piesa galbena este pret*multiplicator

public:
    Piesa_galbena();
    Piesa_galbena(const int, const int);
    Piesa_galbena(const Piesa_galbena&);

    int getPret();
    void afisare();
};

#endif