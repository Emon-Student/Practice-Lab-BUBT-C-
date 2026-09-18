
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name,department;
    long long Id;

    void setData(string n,long long ID,string d){
        name = n;
        Id = ID;
        department = d;
    }

    void DisplayData(){
        cout << "Name: " << name << " Id No: " << Id << " Department-Name: " << department << endl;
    }
};

int main(){
    Student Samiha,Ramisa,Karim,John;


    cout << "Information Student of 1" << endl;
    cout << endl;
    Samiha.setData("Samiha",20262203041,"CSE");
    Samiha.DisplayData();
    cout << endl;


    cout << "Information Student of 2" << endl;
    cout << endl;
    Ramisa.setData("Ramisha",20262203040,"CSE");
    Ramisa.DisplayData();
    cout << endl;



    cout << "Information Student of 3" << endl;
    cout << endl;
    Karim.setData("Karim",20262203039,"CSE");
    Karim.DisplayData();
    cout << endl;


    cout << "Information Student of 4" << endl;
    cout << endl;
    John.setData("John",20262203038,"CSE");
    John.DisplayData();
    cout << endl;
}
