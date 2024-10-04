#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to create a new node
    Node(int value): data(value), next(nullptr) {}
};

class Queue
{
private:
	Node* head;
	Node* tail;

public:
	// constructor
	Queue(): head(nullptr), tail(nullptr) {}

	// destructor
	~Queue() {
		while (head != nullptr) {
	        auto temp = head;
	        head = head->next;
	        delete temp;
	    }
	    tail = nullptr;
	}

	// Enqueue (add an element to the queue)
    void enqueue(int value) {
    	auto newNode = new Node(value);

        if (isEmpty())
        	head = tail = newNode;
        else {
        	tail->next = newNode;
        	tail = newNode;
        }

        cout << value << " enqueued to the queue.\n";
    }

	// Dequeue (remove an element from the queue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        auto temp = head;
        head = temp->next;
        int value = temp->data;
        delete temp;

        if (head == nullptr)
        	tail == nullptr;

        cout << value << " dequeued from the queue.\n";
    }

	// Peek (get the front element of the queue)
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty. Nothing to peek.\n";
            return -1;
        }
        return head->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return head == nullptr && tail == nullptr;
    }

	// method for printing values
	void print() {
		if (isEmpty()) {
			cout << "Queue is empty!\n";
			return;
		}

		cout << "Queue elements: ";

		auto temp = head;
		while (temp != nullptr) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";
	}

};


int main() {
	// creating queue of dynamic size
	Queue queue;

	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(5);
	queue.enqueue(4);
	queue.enqueue(6);

	// // print top element
	cout << "Top element is: " << queue.front() << "\n";

	// // print all elements
	queue.print();

	// // dequeue item
	queue.dequeue();
	queue.dequeue();
	queue.dequeue();

	queue.print();


	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(5);


	queue.print();
}