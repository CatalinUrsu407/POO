#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <cstring>

/// LABORATOR 3 URSU CATALIN-EMILIAN 323AB

using namespace std;

class Student{

char *nume;
char *facultate;
char CNP[14];
int an_nastere;

public:
    Student(); //constructor fara parametri
    Student(const char*, const char*, const char[],const int); //constructor cu parametri
    Student(const Student&); //constructor de copiere
    ~Student(); //destructorul
    void afisare() const; //afiseaza atributele clasei
    void modif(const char*, const char*, const char[], const int); //modifica atributele clasei
    char* getFacultate() const;
    friend int getAn(const Student&); //returneaza varsta obiectului apelat
    friend void interschimbare(Student&, Student&); //interschimba valorile dintre 2 obiecte de tip Student
};

char* Generate_char(int size);
char* Generate_cnp();

#endif