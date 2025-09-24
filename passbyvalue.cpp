#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Family{
    public :
    int age ;
    string name ;
    char gender ;
};
//even after calling the change function the values are not changing because we are passing by value
//this means a copy of the object is made and passed to the function
//so any changes made to the copy do not affect the original object
void change(Family d){
    d.age = 20; 
    d.name = "khushi"; 
}
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

    

    print(d1);
    change(d1); // This will not change d1's values
    print(d1); // d1 remains unchanged
    
    return 0;
}
