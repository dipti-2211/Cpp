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

  Node* removetail(Node* head){
    Node* tail = head;
     if(tail == NULL || tail->next == NULL){
        return NULL;
    }
    while(tail->next != nullptr){

        tail = tail->next;
    }
    Node* prev = tail->back ;
    tail->next = nullptr;
    prev->next = nullptr;
    delete tail;
    return head;

    }

        void printll(Node* head){
        while(head!= NULL){
            cout<< head->data<<" <-> ";
            head = head->next ;
            

        }
        
        
    }

int main(){
    vector<int> arr ={12,78,56,13,67,34};
    
    Node* head = dll(arr);
    head = removetail(head);
    
    printll(head);
    return 0;

}
