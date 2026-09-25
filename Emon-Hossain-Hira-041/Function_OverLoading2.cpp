#include<bits/stdc++.h>
using namespace std;

int add(int a,int b){
    return a+b;
}

double add(double a,double b,double c){
    return a+b+c;
}

int main(){


    int result1 = add(10,20);
    double result2 = add(10.25,20.25,30.25);

    cout << "First Result: " << result1 << " " << fixed << setprecision(2) << "Second Result: " << result2 << endl;

return 0;
}

