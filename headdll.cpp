#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* dll(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
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

void printll(Node* head) {
    while (head != nullptr) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    vector<int> arr = {12, 78, 56, 0};

    Node* head = dll(arr);
    head = removehead(head);

    printll(head);
    return 0;
}
