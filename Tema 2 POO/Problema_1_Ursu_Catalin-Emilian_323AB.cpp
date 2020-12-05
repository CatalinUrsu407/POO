#include <iostream>
#include <string.h>

using namespace std;

class Angajat {
    
    char* nume;
    char* firma;
    char CNP[14];
    int salariu;

public:

    Angajat();

    Angajat(const char* n, const char* f, const char C[], const int s);

    ~Angajat();

    void afisare(); // afiseaza atributele clasei

    void modif(const char* n, const char* f, const char C[], const int s); // modifica atributele clasei: nume cu n, firma cu f etc

    void modif(const Angajat& obj); // modifica atributele clasei: nume cu obj.nume, firma cu obj.firma etc

    int getSalariu() const;

    char* getNume() const;

    void Sortare_Nume(Angajat *array);

    void Salariu_Maxim(Angajat array[]);

};

Angajat::Angajat() {

        nume = NULL;
        firma = NULL;
        salariu = 0;

        //cout << "A fost apelat constructorul\n";

    }

Angajat::Angajat(const char* n, const char* f, const char C[], const int s) {

        nume = new char[strlen(n) + 1];
        strcpy(nume, n);
        firma = new char[strlen(f) + 1];
        strcpy(firma, f);
        strcpy(CNP, C);
        salariu = s;

        //cout << "A fost apelat contructorul cu parametrii\n";

    }

Angajat::~Angajat() {

        delete[] nume;
        delete[]firma;

        //cout << "A fost apelat destructorul\n";

    }

void Angajat::afisare(){

        cout << "Nume= " << nume << " Firma= " << firma << " CNP = " << CNP << " Salariu = " << salariu << endl;

    }

void Angajat::modif(const char* n, const char* f, const char C[], const int s){

        if( nume != NULL )
            delete[]nume;

        nume = new char[strlen(n) + 1];
        strcpy(nume, n);

        if( firma != NULL )
            delete[]firma;

        firma = new char[strlen(f) + 1];
        strcpy(firma, f);

        strcpy(CNP, C);
        salariu = s;

    }

void Angajat::modif(const Angajat& obj){

        if( nume != NULL )
            delete[]nume;

        nume = new char[strlen(obj.nume) + 1];
        strcpy(nume, obj.nume);

        if( firma != NULL )
            delete[]firma;

        firma = new char[strlen(obj.firma) + 1];
        strcpy(firma, obj.firma);

        strcpy(CNP, obj.CNP);
        salariu = obj.salariu;

    }

int Angajat::getSalariu() const{

            return salariu;

    }

char* Angajat::getNume() const{

        return nume;

    }

void Angajat::Sortare_Nume(Angajat *array)
    {

        Angajat aux;

        for(int i=0;i<4;i++)
            for(int j=i+1;j<5;j++)
                if(strcmp(array[i].nume,array[j].nume)>0)
                {

                    aux.modif(array[i]);
                    array[i].modif(array[j]);
                    array[j].modif(aux);

                }

    }

void Angajat::Salariu_Maxim(Angajat array[])
    {

        int salariu_max=0;

        for(int i=0;i<5;i++)
            if(array[i].getSalariu() > salariu_max)
                salariu_max = array[i].getSalariu();

        cout << "Angajatii cu salariu maxim\n\n";

        for(int i=0;i<5;i++)
            if(array[i].getSalariu() == salariu_max)
                array[i].afisare();

    }


int main()
{

    Angajat obj_test, obj_test1("Nume_Test","Firma_Test","1111111111111",25);

    obj_test1.afisare();

    cout << "\n---- TEST ----\n\n";

    Angajat* vec = new Angajat[5];

    vec[0].modif("popescu","Firma1","1111111111111",289);
    vec[1].modif("irimie","Firma2","2222222222222",963);
    vec[2].modif("anton","Firma3","3333333333333",386);
    vec[3].modif("horatiu","Firma4","4444444444444",963);
    vec[4].modif("caragiale","Firma5","5555555555555",189);

    cout << "Inainte de sortare dupa nume\n\n";

    for(int i=0;i<5;i++)
        vec[i].afisare();

    vec->Sortare_Nume(vec);

    cout << "\n\nDupa sortarea in fucntie de nume\n\n";

    for(int i=0;i<5;i++)
        vec[i].afisare();

    cout << "\n\n";

    vec->Salariu_Maxim(vec);

    delete[] vec;

    return 1;

}

