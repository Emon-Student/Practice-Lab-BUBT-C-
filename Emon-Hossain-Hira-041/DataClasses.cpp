#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name,department;
    long long Id;
};

int main(){
    Student Samiha,Ramisa,Karim,John;
    Samiha.name = "Samiha Akter";
    Samiha.Id = 20262203001;
    Samiha.department = "CSE";

    cout << "Name: " << Samiha.name << " Id No: " << Samiha.Id << " Department Name: " << Samiha.department << endl;

    Ramisa.name = "Ramisa Akter Riya";
    Ramisa.Id = 20262203002;
    Ramisa.department = "CSE";

    cout << "Name: " << Ramisa.name << " Id No: " << Ramisa.Id << " Department Name: " << Ramisa.department << endl;

    Karim.name = "Karim Hossen";
    Karim.Id = 20262203003;
    Karim.department = "CSE";

    cout << "Name: " << Karim.name << " Id No: " << Karim.Id << " Department Name: " << Karim.department << endl;


    John.name = "John The Don";
    John.Id = 20262203004;
    John.department = "CSE";

    cout << "Name: " << John.name << " Id No: " << John.Id << " Department Name: " << John.department << endl;

}
