#include "fermier.hpp"

Fermier::Fermier() : venit_pe_ora(0), suprafata(0)
{
}

Fermier::Fermier(const int venit_pe_ora, const int suprafata) : venit_pe_ora(venit_pe_ora), suprafata(suprafata)
{
}

Fermier::Fermier(const Fermier &obj)
{

    *this = obj;
}


void Fermier::afisare()
{

    cout << "Fermier -> Venit pe ora: " << venit_pe_ora << " Suprafata: " << suprafata << endl;

}

bool Fermier::isInginer_software()
{

    return false;

}

int Fermier::getVenit()
{

    return ( suprafata/1000 ) * 10 * venit_pe_ora;

}