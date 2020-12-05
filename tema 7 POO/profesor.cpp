#include "profesor.hpp"

Profesor::Profesor():venit_pe_ora(0),cursuri(0)
{   

}

Profesor::Profesor(const int venit_pe_ora , const int cursuri):venit_pe_ora(venit_pe_ora),cursuri(cursuri)
{

}

Profesor::Profesor(const Profesor &obj)
{

    *this = obj;

}

void Profesor::afisare()
{

    cout << "Profesor -> Venit pe ora: " << venit_pe_ora << " Cursuri: " << cursuri << endl;

}
bool Profesor::isInginer_software()
{

    return false;

}

int Profesor::getVenit()
{

    return cursuri * 2 * venit_pe_ora;

}