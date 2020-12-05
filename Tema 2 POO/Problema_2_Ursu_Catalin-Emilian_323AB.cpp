#include <iostream>
#include <string.h>

using namespace std;

char* Generate_Name(int size)
{
    char* name = new char[size + 1];
    

    for(int i=0;i<size;i++)
        name[i] = 'A' + rand()%24;

    return name;

}

char* Generate_Grupa(int size)
{

    char *grupa = new char(size+1);

    for(int i=0;i<=2;i++)
        grupa[i] = '0' + ((rand()%9) + 1);

    for(int i=3;i<5;i++)
        grupa[i] = 'A' + rand()%24;

    return grupa;

}

class Student
{
private: // valorile nu sunt accesibile din exteriorul clasei

    int id;
    char *nume;
    char grupa_serie[6];
    int note_sem_1[5];

public:

    Student();
    ~Student();
    void init();              // initializeaza obiectul cu valori predefinite sau citite de la tastatura
    void afisare() const;     // afiseaza atributele clasei
    void modific(const char []); // modifica grupa
    void modific(const int x, const int nota); // modifica nota de pe pozitia x
    void copie(const Student &);               // modifica atributele clasei
    double medie(); // returneaza media notelor
};

Student::Student()
{

    id = 0;
    nume = NULL;

} 

Student::~Student()
{

    delete[] nume;

}

void Student::init()
{

    id = rand() % 9000 + 1000;

    
    int size = rand()%10 + 2;
    nume = new char[size+1];
    strcpy(nume,Generate_Name(size));

    //cout << "Citit grupa si seria studentului: ";
    //cin >> grupa_serie;
    strcpy(grupa_serie,Generate_Grupa(5));

    for(int i=0;i<5;i++)
        note_sem_1[i] = rand() % 10 + 1;

}

void Student::afisare() const
{

    cout << "ID: " << id << " Nume: " << nume << " Grupa_Serie: " << grupa_serie << "\nNote semestrul 1 : ";
    for(int i=0;i<5;i++)
        cout << note_sem_1[i] << " ";

    cout << "\n\n";

}

void Student::modific(const char grupa_noua[])
{

    strcpy(grupa_serie,grupa_noua);

}

void Student::modific(const int x, const int nota)
{

    note_sem_1[x]=nota;

}

void Student::copie(const Student &obj)
{
    
    id = obj.id;

    if( nume != NULL )
        delete[] nume;
    nume  = new char[strlen(obj.nume) + 1];
    strcpy(nume,obj.nume);

    strcpy(grupa_serie,obj.grupa_serie);

    for(int i=0;i<5;i++)
        note_sem_1[i] = obj.note_sem_1[i];

}

double Student::medie()
{

    double suma = 0.0;
    
    for(int i=0;i<5;i++)
        suma += note_sem_1[i];

    return suma/5.0; 

}

int main()
{
    cout << "--- TEST --- \n\n";
    Student obj_test,obj_test1;

    obj_test.init();

    obj_test.afisare();

    cout << "Modificare grupa\n";
    obj_test.modific("111AC");
    obj_test.afisare();

    cout<<"Modificare nota de pe pozitia 2\n";
    obj_test.modific(2,10);
    obj_test.afisare();

    cout << "Modificare student\n";
    obj_test1.init();
    obj_test.copie(obj_test1);
    obj_test.afisare();

    cout << "---- FINAL TEST ----\n\n";


    int n;

    cout << "Cati studenti citit ? ";
    cin >> n;

    Student *vec = new Student[n];

    for(int i=0;i<n;i++)
        vec[i].init();

    cout << "\nInainte de sortare\n\n";

    for(int i=0;i<n;i++)
        vec[i].afisare();

    Student aux;

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(vec[i].medie() < vec[j].medie())
            {

                aux.copie(vec[i]);
                vec[i].copie(vec[j]);
                vec[j].copie(aux);

            }

    cout << "\n\n Dupa sortare\n";

    for(int i=0;i<n;i++){
        cout << "Medie: " << vec[i].medie() << "\n";
        vec[i].afisare();
    }

    delete[] vec;

    return 1;
}