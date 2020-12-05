#ifndef MASINA_HPP
#define MASINA_HPP

#include "remorca.hpp"

class Masina : public Remorca   
{
       int valoare;
       char *marca;

public:
        Masina();
        Masina(const int , const char* , const int , const char*);
        Masina(const Masina&);
        Masina& operator=(const Masina&);
        friend ostream& operator<<(ostream&, const Masina&);
        friend istream& operator>>(istream&,  Masina&);
        int GetValoare();
        ~Masina();

};


#endif