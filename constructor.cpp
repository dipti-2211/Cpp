#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Family{
    public :
    int age ;
    string name ;
    char gender ;


// constructor 
Family (int a, string n, char g) {
    age = a;
    name = n;
    gender = g;
}
};

//ordering of constructor should be same as in the class definition in the main function

int main(){
    Family d1 (22, "ayush", 'M');
    Family d2 (30, "pikku", 'M');

    // d1.age = 22 ;
    // d1.name ="ayush";
    // d1.gender = 'M';

     cout << d1.age<<" "<<d1.name<<" "<<d1.gender<<endl;
     cout << d2.age<<" "<<d2.name<<" "<<d2.gender<<endl;

    return 0;
}
