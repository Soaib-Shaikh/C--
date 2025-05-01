#include<iostream>
using namespace std;

class Queue{
    private:
        int front, rear, currentSize;
        int capacity;
        int* array;

    public:
        Queue(int capacity)
        {
            this->capacity = capacity;
            this->front = 0;
            this->currentSize = 0;
            this->rear = -1; // Initialize rear to -1
            array = new int[this->capacity];
        }

        ~Queue()
        {
            delete[] array;
        }

        void enqueue(int data);
        void dequeue();
        void peek();
        bool isFull();
        bool isEmpty();
        void display();
        int size();
        void getFront();
        void getRear();
        
};

void Queue::enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    rear++;

    if (rear == capacity) { // Reset rear to 0 if it reaches the end
        rear = 0;
    }
    array[rear] = data;
    currentSize++;
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty." << endl;
        return;
    }
    rear--; // Move rear backward
    if (rear < 0) { // Reset rear to the last index if it goes below 0
        rear = capacity - 1;
    }
    currentSize--;
}

void Queue::peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front element is: " << array[front] << endl;
}

bool Queue::isFull()
{
    return currentSize == this->capacity;
}

bool Queue::isEmpty()
{
    return currentSize == 0;
}

int Queue::size()
{
    return currentSize;
}

void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    int index = front;
    for (int i = 0; i < currentSize; i++)
    {
        cout << array[index] << " ";
        index++;
        if (index == capacity) { // Reset index to 0 if it reaches the end
            index = 0;
        }
    }
    cout << endl;
}
void Queue::getFront()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Front element is: " << array[front] << endl;
}

void Queue::getRear()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Rear element is: " << array[rear] << endl;
}

int main()
{
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.display();

    queue.dequeue();
    queue.display();

    queue.peek();
    queue.display();

    queue.getFront();
    queue.getRear();
    cout << "Size of queue: " << queue.size() << endl;
    queue.display();

    return 0;
}