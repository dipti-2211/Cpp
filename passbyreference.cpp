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
// This function modifies the object passed by reference
// so the changes will reflect in the original object
//because we are passing by reference by using '&'
// this means no copy is made and the original object is modified

void change(Family &d){
    d.age = 20; 
    d.name = "khushi"; 
    d.gender = 'F';
}
void print(Family d){
    cout<<endl;
    cout << "Name : " << d.name << endl;
    cout << "Age : " << d.age << endl ;
    cout <<"gender : " << d.gender << endl;
    cout<<endl;
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
