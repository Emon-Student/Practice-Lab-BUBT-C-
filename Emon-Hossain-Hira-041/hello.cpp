#include<bits/stdc++.h>
using namespace std;
int main(){

    cout << "Enter Three Numbers Here: ";
    int a,b,c;
    cin >> a >> b >> c;

    int total_sum = a+b;
    int total_sub = a-b;
    long long  total_mul = (long long) a*b;
    float total_div = (float) a/b;

    cout << "Your Summation is : " << total_sum << endl;
    cout << "Your Substraction is : " << total_sub << endl;
    cout << "Your Multification is : " << total_mul << endl;
    cout << "Your Divison is : " << fixed << setprecision(2) << total_div << endl;

    if(a%2==0) cout << "Even" << endl;
    else cout << "Odd" << endl;

    if(a>=b && a>=c) cout << a << " Largest Number" << endl;
    else if(b>=c && b>=a) cout << b << " Largest Number" << endl;
    else cout << c << " Largest Number" << endl;

    if(a>=b && a>=c && b<=a) cout << b << " Middle Number b" << endl;
    else if(b>=a && b>=c && c<=b) cout << c << " Middle Number c" << endl;
    else cout << a << " Middle Number a" << endl;








    return 0;

}
