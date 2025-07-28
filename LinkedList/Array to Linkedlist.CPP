#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Recursive function to convert array to linked list
Node* arrayToLinkedList(int arr[], int index, int size) {
    if (index == size)
        return NULL;

    Node* node = new Node(arr[index]);
    node->next = arrayToLinkedList(arr, index + 1, size);
    return node;
}

// Print linked list
void printList(Node* head) {
    if (head == NULL)
        return;
    cout << head->data << " ";
    printList(head->next);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = arrayToLinkedList(arr, 0, size);

    printList(head);  // Output: 1 3 5 7 9

    return 0;
}
