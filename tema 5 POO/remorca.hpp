#ifndef REMORCA_HPP
#define REMORCA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Remorca {    
protected:
        int masa;
        char * tip;
public:
        Remorca();
        Remorca(const int , const char* );
        Remorca(const Remorca& );
        Remorca& operator=(const Remorca&);
        friend ostream& operator<<(ostream&, const Remorca&);
        friend istream& operator>>(istream&,  Remorca&);
        int GetMasa();

        ~Remorca();
   
};

#endif