#include "clasa.hpp"


int main()
{
    int v[3],f[3]={8,6,7};

    Student *a = new Student[10],nou(f,3,"Popa","grupa3","Fanel");

    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[0] = Student(v,3,"Popa","grupa1","Marcel");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[1] = Student(v,3,"Popa","grupa1","Vasile");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[2] = Student(v,3,"Popa","grupa1","Ion");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[3] = Student(v,3,"Popa","grupa1","Marcela");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[4] = Student(v,3,"Popa","grupa1","Raluca");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[5] = Student(v,3,"Popa","grupa1","Anca");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[6] = Student(v,3,"Popa","grupa1","Razvan");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[7] = Student(v,3,"Popa","grupa1","Daniel");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[8] = Student(v,3,"Popa","grupa1","Mihai");
    v[0] = rand()%10 + 1;
    v[1] = rand()%10 + 1;
    v[2] = rand()%10 + 1;
    a[9] = Student(v,3,"Popa","grupa1","Alexandru");

    Clasa b(a,10);

    cout << "Studentii\n\n";
    cout << b << "\n\n\n";

    b.sortare();

    b.SchimbDiriginte("Aladin");

    cout << "Studentii dupa sortare si dupa schimbarea dirigintelui\n\n";
    cout << b << "\n\n\n";

    b.AdaugaStudent(3,nou);

    cout << "Studentii dupa ce am adaugat un nou student\n\n";
    cout << b;

    return 1;
}