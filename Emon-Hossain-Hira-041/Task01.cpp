#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    long long Id;
    float phy,eng,mat;

    cout << "Enter Your Name: ";
    cin >> name;

    getchar();

   cout << "Enter Your Id: ";
   cin >> Id;

    cout << "Enter Phy,Eng and Math Marks Here: ";
    cin >> phy >> eng >> mat;

    float total_marks,avg;
    if(phy < 100 || eng < 100 || mat < 100){
         total_marks = phy + eng + mat;
         avg = total_marks / 3;
    }
    else{
        cout << "Data is Invalid" << endl;
    }


    if(phy >= 80 && phy <= 100 ){
        cout << "Physics Grade: A+" << endl;
    }
    else if(phy>=75 && phy <= 79){
        cout << "Physics Grade: A" << endl;
    }
    else if(phy>=70 && phy <= 74){
        cout << "Physics Grade: A-" << endl;
    }
    else if(phy>=65 && phy <= 69){
        cout << "Physics Grade: B" << endl;
    }
    else if(phy>=60 && phy <= 64){
        cout << "Physics Grade: B-" << endl;
    }
    else if(phy>=50 && phy <= 60){
        cout << "Physics Grade: C" << endl;
    }
    else if(phy<=49){
        cout << "Physics Grade: F+" << endl;
    }
    else{
        cout << "Your Data is Invalid" << endl;
    }

    if(eng >= 80 && eng <= 100 ){
        cout << "English Grade: A+" << endl;
    }
    else if(eng>=75 && eng <= 79){
        cout << "English Grade: A" << endl;
    }
    else if(eng>=70 && eng <= 74){
        cout << "English Grade: A-" << endl;
    }
    else if(eng>=65 && eng <= 69){
        cout << "English Grade: B" << endl;
    }
    else if(eng>=60 && eng <= 64){
        cout << "English Grade: B-" << endl;
    }
    else if(eng>=50 && eng <= 60){
        cout << "English Grade: C" << endl;
    }
    else if(eng<=49){
        cout << "English Grade: F+" << endl;
    }
    else{
        cout << "Your Data is Invalid" << endl;
    }

    if(mat >= 80 && mat <= 100 ){
        cout << "Mathmatics Grade: A+" << endl;
    }
    else if(mat>=75 && mat <= 79){
        cout << "Mathmatics Grade: A" << endl;
    }
    else if(mat>=70 && mat <= 74){
        cout << "Mathmatics Grade: A-" << endl;
    }
    else if(mat>=65 && mat <= 69){
        cout << "Mathmatics Grade: B" << endl;
    }
    else if(mat>=60 && mat <= 64){
        cout << "Mathmatics Grade: B-" << endl;
    }
    else if(mat>=50 && mat <= 60){
        cout << "Mathmatics Grade: C" << endl;
    }
    else if(mat<=49){
        cout << "Mathmatics Grade: F+" << endl;
    }
    else{
        cout << "Your Data is Invalid" << endl;
    }

    cout << "My name is: " << name << endl;
    cout << "ID Name is: " << Id << endl;
    cout << fixed <<  setprecision(2) << "Total Marks: " << total_marks << " Average Marks: " << avg << endl;




    return 0;
}
