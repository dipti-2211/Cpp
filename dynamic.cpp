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
    colour c1(255, 0, 0); // eg int x = 5;
    colour* c2 = new colour(0, 255, 0); // int* x = new int(10); // return 6;

    cout<<c1.red<<","<<c1.green<<","<<c1.blue<<endl; 
    cout<<c2->red<<","<<c2->green<<","<<c2->blue<<endl; // c2->red = (*c2).red;
   
   
   
    return 0;


}