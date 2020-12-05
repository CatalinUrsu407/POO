#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "nota.hpp"
#include "diriginte.hpp"

class Student : public Nota, public Diriginte
{
    char *nume;

public:
    Student();
    Student(const int *, const int, const char *, const char grupa[], const char *);
    Student(const Student &);
    ~Student();

    Student &operator=(const Student &);
    friend ostream& operator<<(ostream&, const Student&);

    float medie();
    int getNr_note();
    void interschimbare(Student&);
    void SchimbDiriginte(const char*);
};

#endif