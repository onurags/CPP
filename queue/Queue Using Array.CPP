#include <iostream>
using namespace std;

#define SIZE 100  // you can change the size as needed

class Queue {
private:
    int arr[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front > rear;
    }

    // Check if queue is full
    bool isFull() {
        return rear == SIZE - 1;
    }

    // Enqueue (insert element)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
        } else {
            rear++;
            arr[rear] = value;
            cout << value << " enqueued to queue" << endl;
        }
    }

    // Dequeue (remove element)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << arr[front] << " dequeued from queue" << endl;
            front++;
        }
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

// Driver code
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
