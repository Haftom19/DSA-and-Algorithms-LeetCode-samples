#include <iostream>

using namespace std;

struct Node
{
    Node *next;
    int data;
};


int findKthFromEnd(Node *head, int k)

{

    if (head == nullptr || k <= 0)
    {
        return -1;
    }

    Node *fast = head;
    Node *slow = head;

    for (int i = 0; i < k; k++)
    {
        if (fast == nullptr)
        {
            return -1;
        }

        fast->fast->next;
    }

    while (fast != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
    }

    if (slow != nullptr)
    {
        return slow->data;
    }
    else
    {
        return -1;
    }
}



/*  1 -> 2 -> 3 -> 4 -> 5  */ // k=2 return 4
