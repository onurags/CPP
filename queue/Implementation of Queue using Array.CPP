#include<iostream>
using namespace std;

//implement queue using array

class Queue{ 
    int *arr;
    int front, rear, size;
    
    public: 
    //constructor
    Queue(int n){
        arr = new int[n];
        size = n;
        front  = rear = -1;
    }

    //if queue  is empty or not 
    bool isEmpty(){
        return front == -1;
    }
    
    //if queue is full or not
    bool isFull(){
        return rear == size-1;
    }

    //push element in queue, end

    void push(int x){
        //empty
        if(isEmpty()){
            cout<<"Pushed "<<x<<" into the queue\n";
            front  = rear = 0;
            arr[rear] = x;
            return;
        }
        // full 
        else if(isFull()){
            cout<<"Queue is overflow";
            return;

        }
        //insert
        else {
            rear = rear + 1;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" into the queue\n";
            return;
        }

    }

    //pop element, starting
    void pop(){
        //empty
        if(isEmpty()){
            cout<<"Queue is underflow";
            return;
        }
        //pop 
        else {
            if(front == rear){
                cout<<"Popped "<<arr[front]<<" from the queue\n";
                front = rear = -1;
            }else {
                cout<<"Popped "<<arr[front]<<" from the queue\n";
                front = front + 1; 
            }
        }
    }

    //which element is at start
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[front];
    }
};

int main(){
    Queue Q(5);
    Q.push(10);
    Q.push(20);
    Q.push(30);
    // cout<<"Element at start: "<<Q.start()<<endl;
    Q.pop();
    Q.pop();
    Q.pop();
    cout<<"Element at start: "<<Q.start()<<endl;

    return 0;


}
