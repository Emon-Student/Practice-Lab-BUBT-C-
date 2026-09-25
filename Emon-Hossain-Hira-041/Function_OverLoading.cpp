#include<bits/stdc++.h>
using namespace std;

int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

int main(){


    int result1 = add(10,20);
    int result2 = add(10,20,30);

    cout << "First Result: " << result1 << " " << "Second Result: " << result2 << endl;

return 0;
}
