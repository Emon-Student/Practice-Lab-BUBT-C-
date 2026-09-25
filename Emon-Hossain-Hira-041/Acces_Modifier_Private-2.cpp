#include<bits/stdc++.h>
using namespace std;

class Circle {
private:
    double radius;
public:
    double compute_area(double r){
        radius = r;
        return radius*radius*3.1416;
    }
};

int main(){

    Circle obj;

    double radius = 5;

    cout << fixed << setprecision(2) << "Radius Value: " << radius << " Compute Area Value: " << obj.compute_area(radius) << endl;


    return 0;
}

