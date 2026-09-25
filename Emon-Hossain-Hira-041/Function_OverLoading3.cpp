#include<bits/stdc++.h>
using namespace std;

int add(int a,double b){
    return a+b;
}

double add(int a,double b,double c){
    return a+b+c;
}

int main(){


    int result1 = add(10,20.75);
    double result2 = add(10,20.25,30.25);

    cout << fixed << setprecision(2) << "First Result: " << result1 << " "  << "Second Result: " << result2 << endl;

return 0;
}

