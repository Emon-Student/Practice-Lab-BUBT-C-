#include<bits/stdc++.h>
using namespace std;
// Base Class
class Bank{
public:
    float Amount;
};
// Subclass
class Customer:public Bank{
public:
    long long int Customer_ID;
    Customer(long long int C_ID,float amt){
        Customer_ID = C_ID;
        Amount = amt;
    }
    void Print_Values(){
        cout << "Customer Info" << endl;
        cout << endl;
        cout << "Customer_ID: " << Customer_ID << endl;
        cout << fixed << setprecision(2) << "Amount: " << Amount << endl;
    }
};
int main(){

    Customer obj(20262203041,52436.69524);
    obj.Print_Values();

    return 0;

}
