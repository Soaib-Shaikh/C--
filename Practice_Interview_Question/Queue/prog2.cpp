#include<iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int capacity;
    int front;
    int rear;
    int size;

public:
    Queue(int cap) : capacity(cap), front(0), rear(-1), size(0) {
        arr = new int[capacity];
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int value) {
        if (size == capacity) {
            cout << "Queue is full!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    int getFront() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Queue q(5); // Create a queue with capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // Queue is full

    while (!q.isEmpty()) {
        cout << "Dequeued: " << q.getFront() << endl;
        q.dequeue();
    }

    return 0;
}