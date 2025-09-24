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
 void deletenode(Node* temp){
    Node* prev = temp->back ;
    Node* front = temp->next;

    if(temp == NULL){
        prev->next =NULL ;
        temp->back = NULL;
        free(temp);

    }
    prev->next = front ;
    front->back = prev ;
    temp->next = temp->back = NULL ;
    free(temp);
   


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
    deletenode(head->next);  
    
    printll(head);
    return 0;

}
