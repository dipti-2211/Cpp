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
Node* removehead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head; // avoid memory leak
        return nullptr;
    }
    Node* newHead = head->next;
    newHead->back = nullptr;
    delete head;
    return newHead;
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

    Node* removek(Node* head,int k){
        Node* temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++ ;
            if(cnt == k){
                break;
            }
            temp = temp->next;

        }

        if(k == 1){
            removehead(head);
        }
        else if(temp->next == NULL){
            removetail(head);
        }
        if(temp->next != NULL){
            Node* prev = temp->back ;
            Node* front = temp->next;
            prev->next = front ;
            front->back = prev ;
            temp->back = nullptr;
            temp->next = nullptr;
            delete temp ;
           
        }
        return head;

    }

    int printll(Node* head){
        while(head!= NULL){
            cout<< head->data<<" <-> ";
            head = head->next ;
            

        }
        cout<<"NULL"<<endl;
        return 0;
        
        
        
    }

int main(){
    vector<int> arr ={12,78,56,13};
    
    Node* head = dll(arr);
    int k = 2;
    head = removek(head,k);
    
    printll(head);
    return 0;

}
