#include "student.hpp"

Student::Student():Nota(),Diriginte(),nume(NULL)
{

}

Student::Student(const int *note, const int nr_note, const char *nume, const char grupa[], const char *n):Nota(note,nr_note),Diriginte(nume,grupa)
{

    this->nume = new char[strlen(n) + 1];
    strcpy(this->nume,n);

}

Student::Student(const Student &obj)
{

    nume = NULL;

    *this = obj;

}

Student::~Student()
{

    delete[] nume;
    
}

Student &Student::operator=(const Student &obj)
{

    Nota::operator=(obj);
	Diriginte::operator=(obj);
	if (this->nume != NULL)
		delete[] this->nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume,obj.nume);
	
	return *this;

}

ostream& operator<<(ostream& out, const Student& obj)
{

    out << "Student: " << obj.nume << " ";
    out << (Nota&)obj;
    out << (Diriginte&)obj;

    return out;

}

float Student::medie()
{
    float s= 0.0;

    for(int i=0;i<nr_note;i++)
        s += note[i];

    return (float)s/nr_note;


}

int Student::getNr_note()
{

    return nr_note;

}

void Student::interschimbare(Student& obj)
{

    Student aux(*this);
    *this = obj;
    obj = aux;

}

void Student::SchimbDiriginte(const char* nume_nou)
{

    delete[] Diriginte::nume;

    Diriginte::nume = new char[strlen(nume_nou) + 1];

    strcpy(Diriginte::nume,nume_nou);

}