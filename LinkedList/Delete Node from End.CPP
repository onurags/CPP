#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    
        Node(int val){
            data = val;
            next = NULL;
        }
};

Node *CreateLinkedlist(int arr[], int index, int size){
    if(index == size){
        return NULL;
    }
    Node *temp = new Node (arr[index]);
    temp->next = CreateLinkedlist(arr, index+1, size);
    return temp;
}

int main(){

    Node *Head;
    Head = NULL;

    int arr[] = {1, 2, 3, 4, 5};
    Head = CreateLinkedlist(arr, 0, 5);

    //delete end node
    if(Head!=NULL){
        //only one node is present
        if(Head->next == NULL){
            Node *temp = Head;
             delete temp;
             Head = NULL;
        }
        //more than one node present
        else {
            Node * curr = Head;
            Node *prev = NULL;

            while(curr->next != NULL){
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            delete curr;
        }
    }

    //print linkedlist
    Node *temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}
