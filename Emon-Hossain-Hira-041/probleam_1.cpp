#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
};

class Student: public Person{
public:
    long long int studentID;
};


int main(){
    Student emon;
    emon.name = "Emon Hossain Hira";
    emon.age = 22;
    emon.studentID = 20262203041;


    cout << "Student Info" << endl;
    cout << endl;
    cout << "Name: " << emon.name << endl;
    cout << "Age: " << emon.age << endl;
    cout << "Student ID: " << emon.studentID << endl;

    return 0;

}
