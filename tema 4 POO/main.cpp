#include "fractie.hpp"
/// Ursu Catalin-Emilian 323AB

int main()
{

    fractie obj1(5,2);
    fractie obj2(2,3);
    fractie obj3(obj1);
    fractie obj4(0,0);

    obj4.setdata(4,3);


    cout << "Fractia 1 " << obj1.getA() << "/" << obj1.getB() << " Valoare " << obj1.getValoare() <<"\n\n";

    obj1.getInv();

    cout << "Inversa Fractie 1 " << obj1.getA() << "/" << obj1.getB() << " Valoare " << obj1.getValoare() <<"\n\n";

    cout << "Fractia 2 " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    obj2.getInv();

    cout << "Inversa Fractie 2 " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() <<"\n\n";

    cout << "Fractia 3 " << obj3.getA() << "/" << obj3.getB() << " Valoare " << obj3.getValoare() << "\n\n";

    cout << "Fractia 4 " << obj4.getA() << "/" << obj4.getB() << " Valoare " << obj4.getValoare() << "\n\n";

    cout << "Testam operatorul = \nFractie2 = Fractie1\n";

    obj2 = obj1;

    cout << "Fractia 2 dupa atribuire " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul + \nFractie2 = Fractie1 + Fractie3\n";

    obj2 = obj1 + obj3;

    cout << "Fractia 2 dupa adunare " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul - \nFractie2 = Fractie4 - Fractie3\n";

    obj2 = obj4 - obj3;

    cout << "Fractia 2 dupa scadere " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul * \nFractie2 = Fractie1 * Fractie3\n";

    obj2 = obj1 * obj3;

    cout << "Fractia 2 dupa inmultire " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul / \nFractie2 = Fractie1 / Fractie3\n";

    obj2 = obj1 / obj3;

    cout << "Fractia 2 dupa impartire " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul += \nFractie2 += Fractie1 \n";

    obj2 += obj1;

    cout << "Fractia 2 dupa adunare " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul -= \nFractie2 -= Fractie1 \n";

    obj2 -= obj1;

    cout << "Fractia 2 dupa scadere " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul *= \nFractie2 *= Fractie4 \n";

    obj2 *= obj4;

    cout << "Fractia 2 dupa inmultire " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul /= \nFractie2 /= Fractie3 \n";

    obj2 /= obj3;

    cout << "Fractia 2 dupa impartire " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    obj1.setdata(7,2);
    obj2.setdata(5,8);

    cout << "Fractia 1 " << obj1.getA() << "/" << obj1.getB() << " Valoare " << obj1.getValoare() << "\n\n";
    cout << "Fractia 2 " << obj2.getA() << "/" << obj2.getB() << " Valoare " << obj2.getValoare() << "\n\n";

    cout << "Testam operatorul == \nFractie1 == Fractie2 \n";

    if(obj1 == obj2)
        cout<<"Sunt egale\n\n";
    else cout << "Nu sunt egale\n\n";

    cout << "Testam operatorul != \nFractie1 != Fractie2 \n";

    if(obj1 != obj2)
        cout<<"Sunt diferite\n\n";
    else cout << "Nu sunt diferite\n\n";

    cout << "Testam operatorul < \nFractie1 < Fractie2 \n";

    if(obj1 < obj2)
        cout<<"Fractie1 mai mica\n\n";
    else cout << "Fractie2 mai mica\n\n";

    cout << "Testam operatorul > \nFractie1 > Fractie2 \n";

    if(obj1 > obj2)
        cout<<"Fractie1 mai mare\n\n";
    else cout << "Fractie2 mai mare\n\n";

    cout << "Testam operatorul <= \nFractie1 <= Fractie2 \n";

    if(obj1 <= obj2)
        cout<<"Fractie1 mai mica sau egala\n\n";
    else cout << "Fractie2 mai mica sau egala\n\n";

    cout << "Testam operatorul >= \nFractie1 >= Fractie2 \n";

    if(obj1 >= obj2)
        cout<<"Fractie1 mai mare sau egala\n\n";
    else cout << "Fractie2 mai mare sau egala\n\n";

    obj1 = -obj1;

    cout << "Fractia 1 negativa " << obj1.getA() << "/" << obj1.getB() << " Valoare " << obj1.getValoare() <<"\n\n";

    return 1;

}