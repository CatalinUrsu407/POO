#ifndef PROFESOR_HPP
#define PROFESOR_HPP

#include "job.hpp"

class Profesor: public Job
{
    int venit_pe_ora;
    int cursuri; // 1 curs = 2 ore lucrate

public:
    Profesor();
    Profesor(const int , const int);
    Profesor(const Profesor&);

    void afisare();
    bool isInginer_software();

    int getVenit();
};

#endif