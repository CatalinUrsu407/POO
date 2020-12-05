#include "cutie_piese_galbene.hpp"

Cutie_piese_galbene::Cutie_piese_galbene() : dim(0), v(NULL)
{
}

Cutie_piese_galbene::Cutie_piese_galbene(const int dim, const Piesa_galbena *v) : dim(dim)
{
    this->v = new Piesa_galbena[dim];

    for (int i = 0; i < dim; i++)
        this->v[i] = v[i];
}

Cutie_piese_galbene::Cutie_piese_galbene(const Cutie_piese_galbene &obj)
{

    *this = obj;
}
Cutie_piese_galbene::~Cutie_piese_galbene()
{

    delete[] v;
}

Cutie_piese_galbene &Cutie_piese_galbene::operator=(const Cutie_piese_galbene &obj)
{

    this->dim = obj.dim;

    if (this->v != NULL)
        delete[] v;

    this->v = new Piesa_galbena[this->dim];

    for (int i = 0; i < this->dim; i++)
        this->v[i] = obj.v[i];

    return *this;
}

void Cutie_piese_galbene::afisare()
{

    cout << "Dimensiune cutie piese galbene: " << dim << " -> ";

    for (int i = 0; i < dim; i++)
    {
        v[i].afisare();
    }
}

int Cutie_piese_galbene::getPret()
{

    int suma = 0;

    for(int i=0;i<dim;i++)
        suma += v[i].getPret();

    return suma;

}