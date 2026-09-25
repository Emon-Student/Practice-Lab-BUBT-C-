#include<bits/stdc++.h>
using namespace std;

class OverLoad {
public:
    void add(int a,int b){
        cout << a + b << endl;
    }
    void add(int a,int b,int c){
        cout << a + b + c << endl;
    }
    void add(){
        cout << "Zero" << endl;
    }
};

int main(){

    OverLoad obj;

    // Without parameter;
    obj.add();
    // 2 Parameter;
    obj.add(10,20);
    // 3 Parameter
    obj.add(10,20,30);


    return 0;
}

