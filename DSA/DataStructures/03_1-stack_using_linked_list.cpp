#include <bits/stdc++.h>

using namespace std;

// class for Linked List
class Node
{
public:
	int data;
	Node* next;

	// constructor
	Node(int val) {
		data = val;
		next = nullptr;
	}
};

// class for stack
class Stack
{
private:
	Node* top;

public:
	// constructor
	Stack() {
		top = nullptr;
	}

	// destructor
	~Stack() {
		while (!isEmpty()) {
			pop();
		}
	}

	// method for push element in stack
	void push(int val) {
		auto newNode = new Node(val);

		newNode->next = top;
		top = newNode;
	}

	// method for pop element from top of stack
	int pop() {
		if (isEmpty()) {
			cout << "Stack is Underflow!\n";
			return -1;
		}

		auto temp = top;
		int value = temp->data;
		top = temp->next;

		delete temp;

		return value;
	}

	// Method for retrive top element
	int peek() {
		if (isEmpty()) {
			cout << "Stack is empty!\n";
			return -1;
		}

		return top->data;
	}

	// method for checking stack is empty
	bool isEmpty() {
		return top == nullptr;
	}

	// method for printing values
	void print() {
		if (isEmpty()) {
			cout << "Stack is empty!\n";
			return;
		}
		cout << "Stack elements: ";
		auto temp = top;
		while (temp != nullptr) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";
	}

};


int main() {
	// creating stack of dynamic size
	Stack stack;

	stack.push(4);
	stack.push(2);
	stack.push(7);
	stack.push(3);

	// print top element
	cout << "Top element is: " << stack.peek() << "\n";

	// remove top element
	cout << "Top element removed from stack is: " << stack.pop() << "\n";

	// print all elements
	stack.print();
}