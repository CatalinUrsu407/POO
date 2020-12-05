#include "inginer_software.hpp"

Inginer_software::Inginer_software():Inginer(),companie(NULL),experienta(0)
{}

Inginer_software::Inginer_software(const char *companie, const int experienta,const int venit_pe_ora, const int ore_lucrate):experienta(experienta),Inginer(venit_pe_ora,ore_lucrate)
{

    this->companie = new char(strlen(companie) + 1);
    strcpy(this->companie,companie);

}

Inginer_software::Inginer_software(const Inginer_software &obj)
{

    *this = obj;

}

Inginer_software::~Inginer_software()
{

    delete[] companie;

}

Inginer_software &Inginer_software::operator=(const Inginer_software &obj)
{

    if (this->companie != NULL)
        delete[] this->companie;
    this->companie = new char[strlen(obj.companie) + 1];
    strcpy(this->companie, obj.companie);

    this->experienta = obj.experienta;

    return *this;

}

void Inginer_software::afisare()
{

    cout << "Inginer Software -> Companie: " << companie << " Experienta: " << experienta << " ";
    Inginer::afisare();

}

bool Inginer_software::isInginer_software()
{

    return true;

}

int Inginer_software::getVenit()
{

    return Inginer::getVenit();

}