#include <climits>
#include <iostream>
using namespace std;

class Node
{
  public:
    int val;
    Node *next;

    Node(int x)
    {
        val = x;
        next = nullptr;
    }
};

// function for insertion sort on linked list
Node *insertionSort(Node *head)
{

    // Dummy node simplifies insertion at the beginning.
    Node *dummy = new Node(INT_MIN);
    dummy->next = head;

    // lastSorted stores the value of the last node
    // in the currently sorted portion.
    int lastSorted = INT_MIN;

    Node *prev = dummy;
    Node *curr = head;

    while (curr != nullptr)
    {

        // If current node is already in correct position,
        // extend the sorted portion.
        if (curr->val >= lastSorted)
        {
            lastSorted = curr->val;
            prev = curr;
            curr = curr->next;
            continue;
        }

        // Find insertion position in sorted part.
        Node *pos = dummy;
        while (curr->val >= pos->next->val)
        {
            pos = pos->next;
        }

        // Remove curr from current position.
        prev->next = curr->next;

        // Insert curr at correct position.
        curr->next = pos->next;
        pos->next = curr;

        curr = prev->next;
    }

    return dummy->next;
}

// Driver Code
int main()
{

    // Create linked list: 40 -> 20 -> 60 -> 10 -> 50 -> 30
    Node *head = new Node(40);
    head->next = new Node(20);
    head->next->next = new Node(60);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(30);

    head = insertionSort(head);

    // Print sorted linked list
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
