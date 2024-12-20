#include <vector>
#include <iostream>
using namespace std;

class MyCircularQueue {
private:
    vector<int> queue;
    int front;
    int rear;
    int size;
    int capacity;

public:
    MyCircularQueue(int k) {
        capacity = k;
        queue.resize(k);
        front = -1;
        rear = -1;
        size = 0;
    }

    // Inserts an element into the circular queue
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        queue[rear] = value;
        size++;
        return true;
    }

    // Deletes an element from the circular queue
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        size--;
        return true;
    }

    // Gets the front item from the queue
    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return queue[front];
    }

    // Gets the last item from the queue
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return queue[rear];
    }

    // Checks whether the circular queue is empty or not
    bool isEmpty() {
        return size == 0;
    }

    // Checks whether the circular queue is full or not
    bool isFull() {
        return size == capacity;
    }
};

int main() {
    MyCircularQueue myCircularQueue(3);
    myCircularQueue.enQueue(1); // return true
    myCircularQueue.enQueue(2); // return true
    myCircularQueue.enQueue(3); // return true
    myCircularQueue.enQueue(4); // return false
    cout << myCircularQueue.Rear(); // return 3
    cout << myCircularQueue.isFull(); // return true
    myCircularQueue.deQueue(); // return true
    myCircularQueue.enQueue(4); // return true
    cout << myCircularQueue.Rear(); // return 4
    return 0;
}