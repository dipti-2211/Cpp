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

// Correct insert at head function
Node* insertbeforetail(int val, Node* head) {
    Node* temp = head ;
    while(temp->next->next!= nullptr){
        temp = temp->next ;   
     }

     Node* last = temp->next;
    Node* mid = new Node(val, last, temp);
    temp->next = mid;
    last->back = mid;



    return head;

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
    head = insertbeforetail(val, head); // capture new head

    printll(head);
    return 0;
}
