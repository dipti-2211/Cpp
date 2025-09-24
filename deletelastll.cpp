#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Node
{
public :
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
// Function to print the linked list
void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Function to delete the last node of the linked list
Node* deleteLast(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr ;
        }
        Node* temp = head;
        while(temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next; // Delete the last node
        temp->next = nullptr; // Set the second last node's next to nullptr
    
    return head;
}


int main()
{
    // Sample array and value for insertion
    vector<int> arr = {12, 80, 51, 7};
    

    // Creating a linked list with initial elements from the array
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    head = deleteLast(head); // Deleting the last node

    

    // Printing the linked list
    printLL(head);

    return 0;
}