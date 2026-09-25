#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    void display(){
        cout << "I am a Person." << endl;
    }
};

class Student: public Person{
public:
    void display(){
        cout << "I am a Student." << endl;
    }
};

class Teacher: public Person{
public:
    void display(){
        cout << "I am a Teacher." << endl;
    }
};

int main(){

    // Person Class That's Why Print I am a Person.
    Person Emon;
    Emon.display();

    // Student Class That's Why Print I am a Student.
    Student Hossain;
    Hossain.display();

    // Teacher Class That's Why Print I am a Teacher.
    Teacher Hira;
    Hira.display();


    return 0;
}

