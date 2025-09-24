#include <iostream>
#include <vector>
using namespace std;

class Node{
     public:
    int data ;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 , Node* back1){
        data = data1;
        next = next1;
        back = back1;
        
    }

    Node(int data1){
        data = data1;
        next = nullptr ;
        back = nullptr;
    }

  


};
  Node* dll(vector<int> &arr ){
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for(int i = 1; i<arr.size();i++){
            Node* temp = new Node(arr[i], nullptr ,prev);
            prev->next = temp; 
            
            prev =prev->next  ;
            
        }
        return head ;
    }

        void printll(Node* head){
        while(head!= NULL){
            cout<< head->data<<" <-> ";
            head = head->next ;
            

        }
        
        
    }

int main(){
    vector<int> arr ={12,34,56,78,90};
    Node* head = dll(arr);
    printll(head);
    return 0;

}
