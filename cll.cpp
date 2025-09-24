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


// Function to delete the last node of the linked list
int countll(Node* head) {

    int cnt = 0;
    
    Node* temp = head;
    while(temp != NULL) {
        
        temp = temp->next;
        cnt ++;
        }
        
    
    return cnt;
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

    cout << countll(head); // Deleting the last node

    return 0;
}