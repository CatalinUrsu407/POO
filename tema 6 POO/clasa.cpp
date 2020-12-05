#include "clasa.hpp"

Clasa::Clasa():studenti(NULL),nr_studenti(0)
{


}


Clasa::Clasa(const Student *studenti, const int nr_studenti)
{

    this->nr_studenti = nr_studenti;
	this->studenti = new Student[nr_studenti];
	for(int i = 0; i < nr_studenti; i++)
	{
		this->studenti[i] = studenti[i];
	}

}


Clasa::Clasa(const Clasa &obj)
{

    studenti = NULL;

    *this = obj;

}


Clasa::~Clasa()
{

    delete[] studenti;

}

Clasa &Clasa::operator=(const Clasa &obj)
{

    this->nr_studenti = nr_studenti;

    if( studenti != NULL )
		delete []studenti;
	this->studenti = new Student[nr_studenti];
	for(int i = 0; i < nr_studenti; i++)
	{
		this->studenti[i] = obj.studenti[i];
	}
	
	return *this;

}

ostream &operator<<(ostream &out, const Clasa &obj)
{

    for(int i = 0; i < obj.nr_studenti; i++)
	{
		out << obj.studenti[i] << " Medie: " << obj.studenti[i].medie() << endl;
	}
	
	return out;

}

void Clasa::sortare()
{

    Student aux;

    for(int i=0;i<nr_studenti-1;i++)
        for(int j=i+1;j<nr_studenti;j++)
            if(studenti[i].medie() > studenti[j].medie())
            {
                studenti[i].interschimbare(studenti[j]);
            }


} 

void Clasa::SchimbDiriginte(const char* nume_nou)
{

    for(int i=0;i<nr_studenti;i++)
        studenti[i].SchimbDiriginte(nume_nou);

}

void Clasa::AdaugaStudent(const int pos, Student& obj)
{

    Student *new_studenti = new Student[nr_studenti+1];

    nr_studenti++;

    for(int i=0;i<pos;i++)
        new_studenti[i] = studenti[i];

    new_studenti[pos] = obj;

    for(int i=pos;i<nr_studenti-1;i++)
        new_studenti[i+1] = studenti[i];

    delete[] studenti;

    studenti = new Student[nr_studenti];

    for(int i=0;i<nr_studenti;i++)
        studenti[i] = new_studenti[i];

    delete[] new_studenti;

}