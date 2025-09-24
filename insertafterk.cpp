#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

// Build DLL from vector
Node* dll(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}
Node* inserthead(int val, Node* head) {
    Node* temp = new Node(val);
    temp->back = nullptr;
    temp->next = head;

    if (head != nullptr)
        head->back = temp;

    return temp; // return new head
}

// Correct insert at head function
Node* insertbeforek(Node *head, int k, int val) {
        // code here
        if(k ==0){
            return inserthead(val,head);
        }
        Node* temp = head;
        if (temp == NULL) return head;

        int cnt = 0;
        while(cnt<k && temp != NULL){
            
            cnt++ ;
            temp = temp->next ;
           
        }
        Node* prev = temp->back ;
        Node* newNode = new Node(val,temp,prev);
        prev->next = newNode ;
        temp->back = newNode ;
        return head ;
        
    }

// Print DLL
void printll(Node* head) {
    while (head != nullptr) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    vector<int> arr = {12, 78, 56, 13};

    Node* head = dll(arr);

    int val = 5;
    head = insertbeforek(head,2,81); // capture new head

    printll(head);
    return 0;
}
