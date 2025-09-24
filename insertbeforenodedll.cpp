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
Node* insertNode(Node* node , int val){
    Node* prev = node->back ;
    Node* newNode = new Node(val , node , prev);
    prev->next = newNode ;
    node->back = newNode ;



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
    head = insertNode(head->next ,34); // capture new head

    printll(head);
    return 0;
}
