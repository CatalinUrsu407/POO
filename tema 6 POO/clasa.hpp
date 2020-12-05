#ifndef CLASA_HPP
#define CLASA_HPP

#include "student.hpp"

class Clasa
{
    Student *studenti;
    int nr_studenti;

public:
    Clasa();
    Clasa(const Student* , const int);
    Clasa(const Clasa&);
    ~Clasa();

    Clasa &operator=(const Clasa &);
    friend ostream& operator<<(ostream&, const Clasa&);

    void sortare();
    void SchimbDiriginte(const char*);    
    void AdaugaStudent(const int pos, Student& obj);

};

#endif