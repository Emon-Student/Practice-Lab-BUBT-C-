#include<bits/stdc++.h>
using namespace std;
// base class
class Academic{
public:
    float academic_marks;
};
// base class
class Sports{
public:
    float sports_marks;
};

// sub class
class Result:public Academic,public Sports{
public:
    Result(float am,float sm){
        academic_marks = am;
        sports_marks = sm;
    }
    void total_marks(){
        float total;
        total = academic_marks + sports_marks;
        cout << fixed << setprecision(2) <<   "Total Marks: " << total << endl;
    }
    void displayInfo(){
        cout << "Result Show" << endl;
        cout << endl;
        cout << "Academic Marks: " << academic_marks << endl;
        cout << "Sports Marks: " << sports_marks << endl;
        total_marks();
    }
};

int main(){

    Result first(54.63,78.69);
    first.displayInfo();

return 0;
}
