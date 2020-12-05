#ifndef INGINER_HPP
#define INGINER_HPP

#include "job.hpp"

class Inginer:public Job
{
protected:
    int venit_pe_ora;
    int ore_lucrate;

public:
    Inginer();
    Inginer(const int, const int);
    Inginer(const Inginer &obj);

    void afisare();
    bool isInginer_software();

    int getVenit();

};

#endif