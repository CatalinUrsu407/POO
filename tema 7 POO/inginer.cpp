#include "inginer.hpp"

Inginer::Inginer():venit_pe_ora(0),ore_lucrate(0)
{

}

Inginer::Inginer(const int venit_pe_ora, const int ore_lucrate):venit_pe_ora(venit_pe_ora),ore_lucrate(ore_lucrate)
{

}

Inginer::Inginer(const Inginer &obj)
{

    *this = obj;

}

void Inginer::afisare()
{

    cout << "Inginer -> Venit pe ora: " << venit_pe_ora << " Ore lucrate: " << ore_lucrate << endl;

}

bool Inginer::isInginer_software()
{

    return false;

}

int Inginer::getVenit()
{

    return ore_lucrate * venit_pe_ora;

}