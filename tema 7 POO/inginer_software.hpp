#ifndef INGINER_SOFTWARE_HPP
#define INGINER_SOFTWARE_HPP

#include "inginer.hpp"

class Inginer_software: public Inginer {
char* companie;
int experienta;

public:
    Inginer_software();
    Inginer_software(const char *, const int ,const int , const int);
    Inginer_software(const Inginer_software &);
    ~Inginer_software();

    Inginer_software &operator=(const Inginer_software &);

    void afisare();
    bool isInginer_software();

    int getVenit();

};

#endif