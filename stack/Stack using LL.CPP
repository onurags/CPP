#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    Node *top;
    int size;  //actual size of stack

    public:

    Stack(){
        top = NULL;
        size = 0;
    }

    //push
    void push(int val){
        Node *temp = new Node(val);
        if(temp ==  NULL){
            cout<<"Stack Overflow\n";
            return;
        } else{
        temp->next = top;
        top = temp;
        size++;
        cout<<"Pushed "<<val<<" in stack\n";
        }
    }
    //pop
    void pop(){
        if(top == NULL){
            cout<<"Stack Underflow\n";
            return;
        }else{
            Node *temp = top;
            cout<<"Popped "<<top->data<<" from the Stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }
    //peek
    int peek(){
        if(top == NULL){
        cout<<"Stack is Empty!";
        return -1;
    }else{
        return top->data;
    }}
    //isEmpty
    bool isEmpty(){
        return top == NULL;
    }
    //isSize
    int isSize(){
        return size;
    }
};
int main(){
    Stack S;
    S.push(8);
    S.push(78);
    S.push(88);
    S.push(68);
    S.pop();
    // cout<<S.isSize()<<"\n";
    cout<<S.isEmpty()<<"\n";

    return 0;
}
