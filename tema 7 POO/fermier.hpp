#ifndef FERMIER_HPP
#define FERMIER_HPP

#include "job.hpp"

class Fermier:public Job
{
    int venit_pe_ora;
    int suprafata; // fiecare 1000 m^2 = 10 ore lucrate

    public:
        Fermier();
        Fermier(const int , const int);
        Fermier(const Fermier&);

        void afisare();
        bool isInginer_software();

        int getVenit();

};

#endif