#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr) {}
}


Node* reverseLinkedList(Node* head)
{

    Node* prev =nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr!= nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr = next;
    }
    return prev;
}

void PrintList(Node* head)
{
   
    Node* temp = head;
    while (temp!= nullptr)
    {
        cout<<temp->data <<c" -> "c;
        temp= temp->next;
    }
    
    cout<<"nullptr" <<endl;
}

int main()
{
       // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5 -> nullptr
       Node* head = new Node(1);
       head->next = new Node(2);
       head->next->next = new Node(3);
       head->next->next->next = new Node(4);
       head->next->next->next->next = new Node(5);
   
       std::cout << "Original List: ";
       printList(head);
   
       // Reverse the linked list
       head = reverseLinkedList(head);
   
       std::cout << "Reversed List: ";
       printList(head);
   
       return 0;
    
}


