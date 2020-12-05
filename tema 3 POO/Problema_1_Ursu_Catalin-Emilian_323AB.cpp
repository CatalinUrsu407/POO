#include "Student.hpp"

/// LABORATOR 3 URSU CATALIN-EMILIAN 323AB

int main()
{
    cout << "---- TEST ----\n\n";
    
    Student obj_test(Generate_char(5),Generate_char(10),Generate_cnp(),rand()%20 + 1985);
    Student obj_test1(Generate_char(5),Generate_char(10),Generate_cnp(),rand()%20 + 1985);

    cout << "Student 1\n";
    obj_test.afisare();
    cout<<"Student 2\n";
    obj_test1.afisare();

    cout << "Facultate 1 : " << obj_test.getFacultate();
    cout << "\nFacultae 2 : " << obj_test1.getFacultate();

    cout << "\nAn 1 : " << getAn(obj_test);
    cout << "\nAn 2 : " << getAn(obj_test1);

    interschimbare(obj_test,obj_test1);

    cout << "\nDupa interschimbare\nStudent 1\n";
    obj_test.afisare();
    cout<<"Student 2\n";
    obj_test1.afisare();

    cout << "\n----FINAL TEST----\n\n";

    int n = rand()%10 + 20;
    Student* vec = new Student[n];

    for(int i=0;i<n;i++)
        vec[i].modif(Generate_char(5),Generate_char(10),Generate_cnp(),rand()%20 + 1985);

    cout << "Studentii\n\n";
    for(int i=0;i<n;i++)
        vec[i].afisare();

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(vec[i].getFacultate(),vec[j].getFacultate()) > 0)
                interschimbare(vec[i],vec[j]);

    cout << "\nDupa sortare \n";
    for(int i=0;i<n;i++)
        vec[i].afisare();

    int max = 0;

    for(int i=0;i<n;i++)
        if(getAn(vec[i]) > max)
            max = getAn(vec[i]);

    cout << "\n\nStudentii cei mai mari\n";
    for(int i=0;i<n;i++)
        if(getAn(vec[i]) == max)
            vec[i].afisare();

    delete[] vec;

    return 1;
}