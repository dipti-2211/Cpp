#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

class Vector {
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];

    }
    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* newArr = new int[capacity];
            for(int i = 0; i < size; i++){
                newArr[i] = arr[i]; 
            }   
            arr = newArr;

        }
        arr[size++] = ele;//post increment
    }
    void print(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){

    Vector v;
    v.add(10);
    cout<<v.size<<" "<<v.capacity<<endl;
    v.print();
    
    v.add(30);
    cout<<v.size<<" "<<v.capacity<<endl;
    v.print();
    
    v.add(50);
    cout<<v.size<<" "<<v.capacity<<endl;
    v.print();
    
    v.add(70);
    cout<<v.size<<" "<<v.capacity<<endl;
    v.print();
   
    v.add(90);
    cout<<v.size<<" "<<v.capacity<<endl;

    v.print(); // should print 10 20 30 40 50 60 70 80

    
    return 0;
}
