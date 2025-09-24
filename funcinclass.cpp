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
};
int main(){
    colour c1(255, 0, 0); // red
    colour c2(0, 255, 0); // green
    colour c3(0, 0, 255); // blue
    c1.print();
    c2.print();
    c3.print();
   
    return 0;


}