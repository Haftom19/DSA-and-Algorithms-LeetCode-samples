#include<iostream>
#include<stack>

using namespace std;

struct node
{
    int data;
    node* left;    //pointer to the left child
    node* right;   //pointer to the right child

    node(int val) {  //intialize a node with data and null children
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

//recursive in-order traversal

void inOrderRecursive(node* root){  //if the current node is null , return// base case:
    if (root==nullptr)
    {
        return; 
    }
    inOrderRecursive(root->left); //recursively traverse the left subtree
    cout<<root->data<< " ";      //visit the current node(pint the data)
    inOrderRecursive(root->right); //recursively traverse the right node 
}

void inorderIterative(node* root)
{
   stack<node*>stack; //creating stack 
   node* current=root;  //start with root

   while (current!=nullptr || !stack.empty())
   {
     
    //traverse to the leftmost node

    while (current!= nullptr)
    {
        stack.push(current);   //push current onto the stack
        current=current->left;  //move to the left node
    }
    
    //process the current node
    current=stack.top();  //get the top node
    stack.pop();   //pop it from the stack 
    cout<<current->data<<" "; //process the node 
    
    current=current->right;

   }
}

int main()
{
    node* root =new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);

    cout<<"Recursive inOrder traversal: ";
    inOrderRecursive(root);
    cout<<endl;
    cout<<"Iterative inOrder traversal: ";
    inorderIterative(root);
    cout<<endl;

    return 0;
}


