#include <bits/stdc++.h>

using namespace std;

class Stack {
private:
	int top;
	int size;
	int *stack;	// dynamic array

public:
	// constructor
	Stack(int size) {
		size = size;
		stack = new int[size];
		top = -1;
	}

	// destructor
	~Stack() {
		delete[] stack;
	}

	// method for push element in stack
	void push(int val) {
		if (isFull()) {
			cout << "Stack overflow!\n";
			return;
		}

		stack[++top] = val;
	}

	// method for pop element from top of stack
	int pop() {
		if (isEmpty()) {
			cout << "Stack is empty!\n";
			return -1;
		}

		return stack[top--];
	}

	// Method for retrive top element
	int peek() {
		if (isEmpty()) {
			cout << "Stack is empty!\n";
			return -1;
		}

		return stack[top];
	}

	// method for checking stack is empty
	bool isEmpty() {
		return top == -1;
	}

	// method for checking stack is full
	bool isFull() {
		return top == size - 1;
	}

	// method for printing values
	void print() {
		if (isEmpty()) {
			cout << "Stack is empty!\n";
			return;
		}
		cout << "Stack elements: ";
		for (int i = 0; i <= top; ++i) {
			cout << stack[i] << " ";
		}
		cout << "\n";
	}

};


int main() {
	// creating stack of size 10
	Stack stack(10);

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