#include "masina.hpp"

Masina::Masina():Remorca(),valoare(0),marca(NULL)
{

}

Masina::Masina(const int valoare, const char* marca, const int masa, const char* tip):Remorca(masa,tip),valoare(valoare)
{

    this->marca = new char[strlen(marca) + 1];
    strcpy(this->marca,marca);

}

Masina::Masina(const Masina& obj)
{

    marca = NULL;
    *this = obj;

}

Masina& Masina::operator=(const Masina& obj)
{

    Remorca::operator=(obj);
    this->valoare = obj.valoare;
    this->marca = new char(strlen(obj.marca) + 1);
    strcpy(this->marca,obj.marca);

    return *this;

}

ostream& operator<<(ostream& out, const Masina& obj)
{

    out << "Valoare: " << obj.valoare;

    out << "\nMarca: ";
    if(obj.marca != NULL)
        out << obj.marca << endl;

    out << (Remorca&)obj;

    return out;

}

istream& operator>>(istream& in, Masina &obj)
{

    cout << "Introduceti datele despre Masina\n";
    cout << "Valoare: ";
    in >> obj.valoare;

    char buffer[20];
    cout << "Marca: ";
    in >> buffer;
    
    obj.marca = new char[strlen(buffer) + 1];
    strcpy(obj.marca,buffer);

    in>> (Remorca&)obj;

    return in;

}

int Masina::GetValoare()
{

    return valoare;

}

Masina::~Masina()
{

    delete[] marca;

}