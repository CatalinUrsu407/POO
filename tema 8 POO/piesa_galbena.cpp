#include "piesa_galbena.hpp"

Piesa_galbena::Piesa_galbena():Piesa(),multiplicator(0)
{
}

Piesa_galbena::Piesa_galbena(const int multiplicator, const int pret):multiplicator(multiplicator),Piesa(pret)
{
}

Piesa_galbena::Piesa_galbena(const Piesa_galbena& obj)
{

    *this = obj;

}

void Piesa_galbena::afisare()
{

    Piesa::afisare();

    cout << " Multiplicator: " << multiplicator << " ";

}

int Piesa_galbena::getPret()
{

    return multiplicator * pret;

}