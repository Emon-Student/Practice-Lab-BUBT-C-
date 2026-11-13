#include<bits/stdc++.h>
using namespace std;
// Base Class
class Student{
public:
    string student_name;
    long long int student_ID;
    Student(string Sname,long long int sId){
        student_name = Sname;
        student_ID = sId;
    }
};

// Subclass
class Course{
public:
    string course_name;
    string course_code;
    Course(string c_name,string c_code){
        course_name = c_name;
        course_code = c_code;
    }
};

// Subclass
class University{
public:
    string university_name;
    string university_address;
    University(string u_name,string u_address){
        university_name = u_name;
        university_address = u_address;
    }
};

// Subclass
class Enrollment: public Student,public Course,public University{
public:
    string enrollment_date;
    Enrollment(string Sname,long long int sId,string c_name,string c_code,string u_name,string u_address,string e_date):Student(Sname,sId),Course(c_name,c_code),University(u_name,u_address){
        enrollment_date = e_date;
    }
    void printDetails(){
        cout << "Student Info" << endl;
        cout << endl;
        cout << "Name: " << student_name << endl;
        cout << "Student ID: " << student_ID << endl;
        cout << "Course Name: " << course_name << endl;
        cout << "Course Code: " << course_code << endl;
        cout << "University Name: " << university_name << endl;
        cout << "University Address: " << university_address << endl;
        cout << "University Enrollment Date: " << enrollment_date << endl;
    }
};
int main(){
    Enrollment emon("Emon Hossain Hira",20262203041,"OOP","CSE-112","BUBT","Mirpur-2","05-05-2026");
    emon.printDetails();
    return 0;

}

