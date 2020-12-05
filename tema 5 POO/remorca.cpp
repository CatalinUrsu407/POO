#include "remorca.hpp"

Remorca::Remorca():masa(0),tip(NULL)
{

}

Remorca::Remorca(const int mas, const char* tip ):masa(mas)
{

    this->tip = new char[strlen(tip) + 1];
    strcpy(this->tip,tip);

}

Remorca::Remorca(const Remorca& obj)
{

    tip = NULL;
    *this = obj;

}

Remorca::~Remorca()
{

    delete[] tip;

}

Remorca& Remorca::operator=(const Remorca& obj)
{

    this->masa = obj.masa;
    this->tip = new char(strlen(obj.tip) + 1);
    strcpy(this->tip,obj.tip);

    return *this;

}

ostream& operator<<(ostream& out, const Remorca& obj)
{

    out << "Masa: " << obj.masa;

    out << "\nTip: ";
    if(obj.tip != NULL)
        out << obj.tip << endl << endl;

    return out;

}

istream& operator>>(istream& in, Remorca &obj)
{

    cout << "Introduceti datele despre Remorca\n";
    cout << "Masa: ";
    in >> obj.masa;

    char buffer[20];
    cout << "Tip: ";
    in >> buffer;
    
    obj.tip = new char[strlen(buffer) + 1];
    strcpy(obj.tip,buffer);

    return in;

}

int Remorca::GetMasa()
{

    return masa;

}