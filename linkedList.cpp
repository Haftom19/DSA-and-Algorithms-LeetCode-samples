#include <iostream>

using namespace std;

// creating a node

struct node
{
    int data;
    struct node *next;
};

// struct node *head=NULL;
// struct node *current =NULL;

void insertAtBegining(node *&head, int newData)
{
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = head; // the head should be assign at first ,
    head = newNode;       // updating the hed of the list to point newNode
}

void insertAtEnd(node *&head, int newData)
{
    node *newNode= new node();
    newNode->data =newData;
    newNode->next=nullptr;

    //if the the list is empty make the newNODE Head

    if (head==nullptr)
    {
        head=newNode;
        return;
    }

    //traverse to the last node
    node * current=head;
    while (current->next != nullptr)
    {
        current=current->next;
        
    }
    
    current->next = newNode; //update the last node's next to point to the new node 
    
}

//inserting at any position
void insertAtPosition(node *&head, int newData,int position)
{
     if (position==0)
     {
        insertAtBegining(head,newData);
        return;
     }

     node* newNode =new node();   //create new node
     newNode->data=newData;      //set the data

     node* current= head;

     for (int i = 0; i < position-1 && current != nullptr; i++) //traverse
     {
        current=current->next;
     }

     if (current == nullptr)   //if the position is beyomd limit 
     {
        cout<<"beyound limit";
        return;
     }

     newNode->next=current->next; //link the newnode to the next node
     current->next=newNode;   //link the previous to the newnode
}

void deleteFrombegining(node *&head)
{
    if (head==nullptr)
    {
        cout<<"empty list"<<endl;
        return;
    }

node *current=head;     //store temporariley the current head
head=head->next;        //move the head pointer 

delete current; //delete old head node

}

void deleteAtEnd(node *&head)
{
    if (head==nullptr)
    {
        cout<<"empty list"<<endl;
        return;
    }

   if (head->next==nullptr)  //if there is only one node 
   {
    delete head;
    head=nullptr;
     return;
   }

   node *current= head;
   while (current->next->next!=nullptr) //traverse to the second last node
   {
    current=current->next; //move current to the next node 
   }

   delete current->next;  //delete the last node
   current->next=nullptr;  //set the next second last node to nullptr
   

}

void deleteAtPosition(node *&head,int position)
{
   if (head==nullptr || position<1)
   {
    cout<<"invalid or list empty"
    return;
   }


   if (position==0)
   {
    deleteFrombegining(head);
   }

   node *current=head;
   for (int i = 1; i < position && temp->next!=nullptr; i++) //traverse till the node to be delete
   {
     current=current->next;
   }

   if (current==nullptr)
   {
    cout<<"position out of range";
    return;
   }

   node* nodeToDelete = current->next;
   
   current->next= current->next->next;

   delete nodeToDelete;
   
   
}

void reverseList(node *&head)
{
    node* prev= nullptr;  
    node*current = head;
    node* next=nullptr;

while (current!=nullptr)
{
    next=current->next;       //store next node
    current->next=prev;       //reverse the current node's pointer
    prev=current;             //move prev to current node
    current=next;
}

head=prev;        //update the head to the new first node;

}

void displayList(node *head)
{
    node *current = head;      // start from the head
    while (current != nullptr)
    {
        cout<<current->data<<"->";
        current=current->next;    //move to the next node 
    }

    cout<<"nullptr" <<endl;  //end of the list 
}




int main()
{
    node* head=nullptr;

    insertAtBegining(head,3);
    insertAtBegining(head,10);
    insertAtBegining(head,12);

    insertAtEnd(head,4);
    insertAtEnd(head,7);


    insertAtPosition(head,11,2);

    deleteFrombegining(head);


    displayList(head);

    return 0;
}

