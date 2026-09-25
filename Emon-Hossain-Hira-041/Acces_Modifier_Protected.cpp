#include<bits/stdc++.h>
using namespace std;

class Parent {
protected:
    string Name;
};

class Child : public Parent{
public:
    void setName(string name){
        Name = name;
    }
    void displayName(){
    cout << "My Name is " << Name << endl;
    }
};

int main(){

 Child Obj;

 Obj.setName("Emon Hossain Hira");
 Obj.displayName();





    return 0;
}

