#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name,department;
    long long Id;

    void DisplayData(){
        cout << "Name: " << name << " Id No: " << Id << " Department-Name: " << department << endl;
    }
};

int main(){
    Student Samiha,Ramisa,Karim,John;
    Samiha.name = "Samiha Akter";
    Samiha.Id = 20262203001;
    Samiha.department = "CSE";
    cout << "Information Student of 1" << endl;
    cout << endl;
    Samiha.DisplayData();
    cout << endl;

    Ramisa.name = "Ramisa Akter Riya";
    Ramisa.Id = 20262203002;
    Ramisa.department = "CSE";
    cout << "Information Student of 2" << endl;
    cout << endl;
    Ramisa.DisplayData();
    cout << endl;


    Karim.name = "Karim Hossen";
    Karim.Id = 20262203003;
    Karim.department = "CSE";
    cout << "Information Student of 3" << endl;
    cout << endl;
    Karim.DisplayData();
    cout << endl;

    John.name = "John The Don";
    John.Id = 20262203004;
    John.department = "CSE";
    cout << "Information Student of 4" << endl;
    cout << endl;
    John.DisplayData();
    cout << endl;
}
