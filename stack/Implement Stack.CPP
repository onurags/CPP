#include<iostream>
using namespace std;

class Stack{
    
    public:
    int *arr;
    int maxSize;
    int top;


    //constructor
    Stack(int s){
        maxSize = s;
        top = -1;
        arr = new int[s];
    }

    //push
    void push(int val){
        if(top == maxSize-1){
            cout<<"Stack Overflow\n";
        }else{
            top++;
            arr[top] = val;
            cout<<"Pushed "<<val<<" in stack";
        }
    }
    //pop
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow\n";
        } else{
            top--;
            cout<<"Popped "<<arr[top+1]<<" from stack";
        }
    }
    
    //peak
    int peek(){
        if(top == -1){
            cout<<"Stack is Empty\n";
        }else{
            return arr[top];
        }
    }

    //isEmpty
    bool isEmpty(){
        return top == -1;
    }
    //isSize
    int size(){
        return top+1;
    }
};

int main(){
    Stack S(5);

    return 0;
}
