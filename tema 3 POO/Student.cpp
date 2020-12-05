#include "Student.hpp"

/// LABORATOR 3 URSU CATALIN-EMILIAN 323AB

char* Generate_char(int size)
{
    char* name = new char[size + 1];
    

    for(int i=0;i<size;i++)
        name[i] = 'A' + rand()%24;

    return name;

}

char* Generate_cnp()
{

    char* temp = new char[14];

    for(int i=0;i<13;i++)
        temp[i] = '0' + rand()%9 + 1;

    return temp;


}

Student::Student()
{

    nume = NULL;
    facultate = NULL;
    an_nastere = 0;

}

Student::Student(const char* n, const char* f, const char cnp[], const int an)
{

    nume = new char[strlen(n) + 1];
    strcpy(nume,n);

    facultate = new char[strlen(f) + 1];
    strcpy(facultate,f);

    strcpy(CNP,cnp);

    an_nastere = an;

}

Student::Student(const Student &obj)
{

    nume = new char[strlen(obj.nume) + 1];
    strcpy(nume,obj.nume);

    facultate = new char[strlen(obj.facultate) + 1];
    strcpy(facultate,obj.facultate);

    strcpy(CNP,obj.CNP);

    an_nastere = obj.an_nastere;

}

Student::~Student()
{

    delete[] nume;
    delete[] facultate;

}

void Student::afisare() const
{

    cout << "Nume: " << nume << " Facultate: " << facultate << " CNP: " << CNP << " An de nastere: " << an_nastere << "\n";

}

void Student::modif(const char* n, const char* f, const char cnp[], const int an)
{

    if(nume != NULL)
        delete[] nume;
    nume = new char[strlen(n) + 1];
    strcpy(nume,n);

    if(facultate != NULL)
        delete[] facultate;
    facultate = new char[strlen(f) + 1];
    strcpy(facultate,f);

    strcpy(CNP,cnp);

    an_nastere = an;

}

char* Student::getFacultate() const
{

    return facultate;

}

int getAn(const Student &obj)
{

    return 2020 - obj.an_nastere;

}

void interschimbare(Student &obj1, Student &obj2)
{

    Student temp(obj1);

    obj1.modif(obj2.nume,obj2.facultate,obj2.CNP,obj2.an_nastere);
    obj2.modif(temp.nume,temp.facultate,temp.CNP,temp.an_nastere);



}