#include<bits/stdc++.h>
using namespace std;
// Base Class
class Person{
public:
    string name;
    int age;
    long long int studentID;
    float exam_marks;
};

// Subclass
class Student: public Person{
};

// Subclass
class Exam: public Student{
public:
    Exam(string n,int a,long long int id,float m){
        name = n;
        age = a;
        studentID = id;
        exam_marks = m;
    }
    void display(){
        cout << "Student Info" << endl;
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
        cout << fixed << setprecision(2) << "Student Exam Marks: " << exam_marks << endl;
    }
};
int main(){

    Exam obj("Emon Hossain Hira",22,20262203041,69.6465);
    obj.display();

    return 0;

}
