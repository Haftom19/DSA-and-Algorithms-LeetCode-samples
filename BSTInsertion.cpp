#include <iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

// node* will handelling when the case of inserting into an empty tree
node *insertRecursive(node *root, int key) // recursive function to insert new key int BST
{

    if (root == nullptr)
    {
        return new node(key); // new node become the root
    }

    if (key < root->data)
    {
        root->left = insertRecursive(root->left, key);
    }

    else if (key > root->data)
    {

        root->right = insertRecursive(root->right, key);
    }

    return root;
}

node *inserIterative(node *root, int key)
{
    node *newNode = new node(key); // creating new node

    if (root == nullptr) // if empty tree return new node becomes the new root
    {
        return newNode;
    }

    /* start from the root and traverse the tree to find
    the correct position*/

    node *current = root;   // pointer to traverse
    node *parent = nullptr; // pointer to keep track the parent

    while (current != nullptr)
    {
        parent = current; // update the parent pointer

        if (key < current->data)
        {
            current = current->left; // move to the left sub tree
        }

        else if (key > current->data)
        {
            current = current->right; // move to the right tree
        }

        else
        {
            return root; // the key is already present in the BST or
        }
    }
    // inserrt the new node as a child of parent
    if (key < parent->data)
    {
        parent->left = newNode;
    }

    else
    {
        parent->right = newNode;
    }

    // return

    return root;
}

void inorder(node *root)
{
    // if the current node is not null

    if (root != nullptr)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{
    node *root = nullptr;

    root = inserIterative(root, 50);
    inserIterative(root, 30);
    inserIterative(root, 20);
    inserIterative(root, 40);
    inserIterative(root, 70);
    inserIterative(root, 60);
    inserIterative(root, 80);

    cout << "in order traversal of the BST iterative ";
    inorder(root);
    cout << endl;

    insertRecursive(root,25);
    insertRecursive(root,55);

    cout <<"in order traversal of the BST after recursive ";
    inorder(root);
    cout<<endl;

    return 0;
}
