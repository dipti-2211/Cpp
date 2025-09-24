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
// Function to insert a new node at the head of the linked list
Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}
int main()
{
    // Sample array and value for insertion
    vector<int> arr = {12, 80, 51, 7};
    int val = 10;

    // Creating a linked list with initial elements from the array
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    // Inserting a new node at the head of the linked list
    head = insertHead(head, val);

    // Printing the linked list
    printLL(head);

    return 0;
}