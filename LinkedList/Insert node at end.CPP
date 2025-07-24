#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
        Node(int val){
            data = val;
            next = NULL;
        }
};

int main(){
    Node *Head, *Tail;
    Head = Tail = NULL;

    int arr[] = {1, 2, 3, 4, 5};

    for(int i = 0; i<5; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
            Tail = Head;
        } else{
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
    Node *temp;
    temp = Head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}
