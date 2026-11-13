#include<bits/stdc++.h>
using namespace std;
// Base Class
class Person{
public:
    string name;
    int age;
};

// Subclass
class Student: virtual public Person{
public:
    long long int studentID;
};

// Subclass
class Employee: virtual public Person{
public:
    string employeeID;
};

// Subclass
class TeachingAssistant: public Student,public Employee{
public:
    TeachingAssistant(string n,int a,long long int id,string eId){
        name = n;
        age = a;
        studentID = id;
        employeeID = eId;
    }
    void display(){
        cout << "Student and Employee Info" << endl;
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Employee Id: " << employeeID << endl;
    }
};




int main(){

    TeachingAssistant obj("Emon Hossain Hira",22,20262203041,"BUBT-CSE-3041");
    obj.display();

    return 0;

}
