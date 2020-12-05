#include "masina.hpp"

using namespace std;

int main()
{

    Masina *vec = new Masina[5];

    for(int i=0;i<5;i++)
        cin >> vec[i];

    cout << "\nMasinile cu remorcile lor\n";
    for(int i=0;i<5;i++)
        cout << vec[i];


    for(int i=0;i<4;i++)
        for(int j=i+1;j<5;j++)
            if(vec[i].GetValoare() > vec[j].GetValoare())
                {
                    Masina aux;

                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;

                }
    cout << "Masinile cu remorcile lor dupa sortare\n";
    for(int i=0;i<5;i++)
        cout << vec[i];

    cout << "Masinile care au masa remorca mai mare de 500\n";
    for(int i=0;i<5;i++)
        if(vec[i].GetMasa()>500)
            cout << vec[i];

    

    return 1;
}