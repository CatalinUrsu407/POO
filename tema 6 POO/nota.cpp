#include "nota.hpp"

Nota::Nota():note(NULL),nr_note(0)
{


}

Nota::Nota(const int *note, const int nr_note):nr_note(nr_note)
{

    this->note = new int[nr_note];

    for(int i=0;i<nr_note;i++)
        this->note[i] = note[i];

}

Nota::Nota(const Nota &obj)
{

    *this = obj;

}

Nota::~Nota()
{

    delete[] note;

}

Nota& Nota::operator=(const Nota &obj)
{

    nr_note = obj.nr_note;

    if(note != NULL)
        delete[] note;

    this->note = new int[nr_note];

    for(int i=0;i<nr_note;i++)
        note[i] = obj.note[i];

    return *this;

}

ostream& operator<<(ostream& out, const Nota& obj)
{

    out << "Note: ";

    for(int i=0;i<obj.nr_note;i++)
        out << obj.note[i] << " ";

    return out;

}