#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Family{
    public :
    int age ;
    string name ;
    char gender ;

    //default constructor
    Family() {
    }


// parametrized constructor 
Family (int a, string n, char g) {
    age = a;
    name = n;
    gender = g;
}
};


void print(Family d){
    cout << "Name : " << d.name << endl;
    cout << "Age : " << d.age << endl ;
    cout <<"gender : " << d.gender << endl;
}

int main(){
    Family d1 ;
    d1.age = 22 ;
    d1.name ="ayush";
    d1.gender = 'M';

    Family d2(30, "pikku", 'M');

    

    print(d1);
    print(d2);
    
    
    return 0;
}
