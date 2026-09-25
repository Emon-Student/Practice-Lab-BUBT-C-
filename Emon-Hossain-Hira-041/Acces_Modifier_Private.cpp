#include<bits/stdc++.h>
using namespace std;

class Circle {
private:
    double radius;
public:
    double compute_area(){
        return radius*radius*3.1416;
    }
};

int main(){

    Circle obj;

    obj.radius = 3.69;

    cout << fixed << setprecision(2) << "Radius Value: " << obj.radius << " Compute Area Value: " << obj.compute_area() << endl;


    return 0;
}

