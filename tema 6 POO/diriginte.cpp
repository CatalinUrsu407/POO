#include "diriginte.hpp"

Diriginte::Diriginte() : nume(NULL)
{
}

Diriginte::Diriginte(const char *nume, const char grupa[])
{

    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);

    strcpy(this->grupa, grupa);
}

Diriginte::Diriginte(const Diriginte &obj)
{

    *this = obj;
}

Diriginte::~Diriginte()
{

    delete[] nume;

}

Diriginte &Diriginte::operator=(const Diriginte &obj)
{

    if (nume != NULL)
        delete[] nume;
    nume = new char[strlen(obj.nume) + 1];
    strcpy(nume, obj.nume);

    strcpy(grupa,obj.grupa);

    return *this;
}

ostream& operator<<(ostream& out, const Diriginte& obj)
{

    out << "Diriginte: " << obj.nume << " Grupa: " << obj.grupa;

    return out;

}