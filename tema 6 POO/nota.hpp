#ifndef NOTA_HPP
#define NOTA_HPP

#include <iostream>
using namespace std;

class Nota
{
protected:
    int *note;
    int nr_note;

public:
    Nota();
    Nota(const int* , const int);
    Nota(const Nota&);
    ~Nota();

    Nota& operator=(const Nota&);
    friend ostream& operator<<(ostream&, const Nota&);

};

#endif