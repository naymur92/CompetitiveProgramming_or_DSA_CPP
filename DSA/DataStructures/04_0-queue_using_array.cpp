#include <bits/stdc++.h>

using namespace std;

class Queue
{
private:
	int frontIndx, rear, size;
    int* queueArray;
    int capacity;

public:
	// constructor
	Queue(int capacity) {
        this->capacity = capacity;
        queueArray = new int[capacity];
        frontIndx = -1;
        rear = -1;
    }

	// destructor
	~Queue() {
		delete[] queueArray;
	}

	// Enqueue (add an element to the queue)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << value << "\n";
            return;
        }

        if (isEmpty())
        	frontIndx = rear = 0;
        else
        	rear = (rear + 1) % capacity;
        queueArray[rear] = value;

        cout << value << " enqueued to the queue.\n";
    }

	// Dequeue (remove an element from the queue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        int value = queueArray[frontIndx];
        if (frontIndx == rear)
        	frontIndx = rear = -1;
        else
        	frontIndx = (frontIndx + 1) % capacity;

        cout << value << " dequeued from the queue.\n";
    }

	// Peek (get the front element of the queue)
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty. Nothing to peek.\n";
            return -1;
        }
        return queueArray[frontIndx];
    }

    // Check if the queue is empty
    bool isEmpty() {
        return frontIndx == -1 && rear == -1;
    }

    // Check if the queue is full
    bool isFull() {
        return (rear + 1) % capacity == frontIndx;
    }

	// method for printing values
	void print() {
		if (isEmpty()) {
			cout << "Queue is empty!\n";
			return;
		}

		cout << "Queue elements: ";
		
		int i = frontIndx;
        while (i != rear) {
            cout << queueArray[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << queueArray[rear] << "\n";
	}

};


int main() {
	// creating queue of size 6
	Queue queue(6);

	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(5);
	queue.enqueue(4);
	queue.enqueue(6);

	// print top element
	cout << "Top element is: " << queue.front() << "\n";

	// print all elements
	queue.print();

	// dequeue item
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();

	queue.print();


	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(5);


	queue.print();
}