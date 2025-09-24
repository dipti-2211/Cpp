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



int checkelement(Node* head , int val) {
    Node* temp = head;
    int cnt = 0;
    if(val !=temp->data){
        cout<< "False" ;
    }
    while(temp != NULL) {
        cnt++;
        if(val ==temp->data) {
            cout << "true" << endl;
            cout<< "present at index = " << cnt; // Element found
        }
        temp = temp->next;

        
    }
    
    
    
    
    return 0;
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
    int val ;
    cout << "Enter the value to check ";
    // Taking input from the user
    cin >> val;

    return checkelement(head,val); // Deleting the last node

    return 0;
}