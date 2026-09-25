#include<bits/stdc++.h>
using namespace std;

class Student {
protected:
    int id = 3041;
    string Name = "Emon Hossain Hira";
};

class CSE : public Student{
public:
    void display(){
        cout << "My Name is " << Name << endl;
        cout << "My ID Number is " << id << endl;
    }
};

int main(){

    CSE Emon;
    Emon.display();


    return 0;
}

