#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int id = 3041;
    string Name = "Emon Hossain Hira";
    void display(){
        cout << "My Name is " << Name << ".My ID is " << id << endl;
    }
};

int main(){

    Student Emon;
    Emon.display();


    return 0;
}

