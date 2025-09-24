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
};
int main(){
    colour c1(255, 0, 0); // red
    colour c2(0, 255, 0); // green
    colour c3(0, 0, 255); // blue
    cout<<c1.red<<","<<c1.green<<","<<c1.blue<<endl; 
    cout<<c2.red<<","<<c2.green<<","<<c2.blue<<endl; 
    cout<<c3.red<<","<<c3.green<<","<<c3.blue<<endl; 
    return 0;


}