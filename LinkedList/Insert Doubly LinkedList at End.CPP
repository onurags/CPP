#include<iostream>
using namespace std;

class Node {
public: 
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main() {
    Node *head = NULL;

    // Insert at end

    // Case 1: Linked list does not exist (empty list)
    if (head == NULL) {
        head = new Node(5);
    } 
    // Case 2: Linked list exists
    else {
        Node *curr = head;

        // Traverse to the last node
        while (curr->next != NULL) {
            curr = curr->next;
        }

        // Create a new node and link it at the end
        Node *temp = new Node(5);
        curr->next = temp;
        temp->prev = curr;
    }

    // Traverse and print the linked list
    Node *trav = head;
    while (trav) {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}
