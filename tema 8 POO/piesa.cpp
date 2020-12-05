#include "piesa.hpp"

Piesa::Piesa():pret(0)
{
}

Piesa::Piesa(const int pret):pret(pret)
{
}

Piesa::Piesa(const Piesa& obj)
{

    *this = obj;

}

void Piesa::afisare()
{

    cout << "Pretul piesei: " << pret;

}

int Piesa::getPret()
{

    return pret;

}