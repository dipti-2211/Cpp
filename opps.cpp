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
void print(Family d){
    cout << "Name : " << d.name << endl<<endl;
    cout << "Age : " << d.age << endl ;
    cout <<"gender : " << d.gender << endl;
}

int main(){
    Family d1 ;
    d1.age = 22 ;
    d1.name ="ayush";
    d1.gender = 'M';

    Family d2 ;
    d2.age = 45 ;
    d2.name = "mumma" ;
    d2.gender = 'F';

    Family d3 ;
    d3.age = 52 ;
    d3.name = "papa" ;  
    d3.gender = 'M';

    print(d1);
    print(d2);
    print(d3);

    return 0;
}
