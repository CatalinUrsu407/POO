#include "cutie_piese_galbene.hpp"

int main()
{

    Piesa p1(rand() % 10 + 1), p2(rand() % 10 + 1), p3(rand() % 10 + 1);

    Piesa_galbena g1[2], g2[3];

    g1[0] = Piesa_galbena(rand() % 10 + 1, rand() % 10 + 1);
    g1[1] = Piesa_galbena(rand() % 10 + 1, rand() % 10 + 1);

    g2[0] = Piesa_galbena(rand() % 10 + 1, rand() % 10 + 1);
    g2[1] = Piesa_galbena(rand() % 10 + 1, rand() % 10 + 1);
    g2[2] = Piesa_galbena(rand() % 10 + 1, rand() % 10 + 1);

    Cutie_piese_galbene cutie1(2, g1), cutie2(3, g2);

    Baza **v;

    v = new Baza *[10];

    v[0] = new Piesa(p3);
    v[1] = new Piesa_galbena(g1[0]);
    v[2] = new Cutie_piese_galbene(cutie1);
    v[3] = new Piesa_galbena(g1[1]);
    v[4] = new Piesa_galbena(g2[0]);
    v[5] = new Piesa(p1);
    v[6] = new Cutie_piese_galbene(cutie2);
    v[7] = new Piesa_galbena(g2[1]);
    v[8] = new Piesa(p2);
    v[9] = new Piesa_galbena(g2[2]);

    cout << "-----Vectorul neomogen inainte de sortare-----\n\n";
    for (int i = 0; i < 10; i++)
    {
        v[i]->afisare();
        cout << " ---pret--- " << v[i]->getPret();
        cout << endl;
    }

    for(int i=0;i<9;i++)
        for(int j=i+1;j<10;j++)
            if(v[i]->getPret() < v[j]->getPret())
            {

                Baza *aux;

                aux = v[i];
                v[i] = v[j];
                v[j] = aux;

            }

    cout << "\n\n-----Vectorul neomogen dupa sortare-----\n\n";
    for (int i = 0; i < 10; i++)
    {
        v[i]->afisare();
        cout << " ---pret--- " << v[i]->getPret();
        cout << endl;
    }

    return 1;
}