#include<stdio.h>
#include<iostream>
using namespace std;
class colour{
    public:
    int red, green, blue;
    colour(int red, int green, int blue) {
        this->red = red;
        this->green = green;
        this->blue = blue;
        
    }  
    //we can also print this way cout<<red<<","<<green<<","<<blue<<endl;  no difference

    void print(){
        cout<<this->red<<","<<this->green<<","<<this->blue<<endl; 

    } 
    void change(colour* c) {
        c->red = 300; //it means (*c).red = c->red ;
    }
};
int main(){
    colour c1(255, 0, 0); // red

    colour* p1 =&c1;
    cout<<p1->red<<endl;
    cout<<c1.red<<endl;
    p1->red = 100; // changing value using pointer
    cout<<p1->red<<endl; // should print 100
    c1.change(p1);
    cout<<c1.red<<endl; // should print 100
    return 0;


}