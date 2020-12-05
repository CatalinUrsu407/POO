#include "profesor.hpp"
#include "fermier.hpp"
#include "inginer_software.hpp"

int main()
{

    Job **v;

    v = new Job *[5];

    v[0] = new Fermier(100, 3000);
    v[1] = new Inginer(200, 125);
    v[2] = new Inginer_software("Ubisoft", 7, 230, 95);
    v[3] = new Profesor(75, 15);
    v[4] = new Inginer_software("Microsoft", 10, 270, 125);

    cout << "Inainte de sortare-----\n\n";
    for (int i = 0; i < 5; i++)
    {
        v[i]->afisare();
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 5; j++)
            if (v[i]->getVenit() > v[j]->getVenit())
            {

                Job *aux;

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

    cout << "Dupa sortare-----\n\n";
    for (int i = 0; i < 5; i++)
    {
        v[i]->afisare();
        cout << "Venit: " << v[i]->getVenit();
        cout << endl
             << endl;
    }

    cout << "Doar Inginerii Software-----\n\n";
    for (int i = 0; i < 5; i++)
    {
        if (v[i]->isInginer_software())
        {
            v[i]->afisare();
            cout << endl;
        }
    }
}