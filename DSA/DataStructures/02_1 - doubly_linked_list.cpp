#include <bits/stdc++.h>

using namespace std;

// class declaration
class Node
{
public:
	int data;
	Node* prev;
	Node* next;
};

struct Node* getNewNode(int x) {
	Node* newNode = new Node();

	newNode->prev = nullptr;
	newNode->next = nullptr;
	newNode->data = x;

	return newNode;
};

// insert first element
void insertAtBeginning(Node* &head, int data) {
	auto tempNode = getNewNode(data);
	
	if (head == nullptr) {
		head = tempNode;
		return;
	}

	head->prev = tempNode;
	tempNode->next = head;
	head = tempNode;
}

// insert at last
void insertAtEnd(Node* &head, int data) {
	auto newNode = getNewNode(data);

	if (head == nullptr) head = newNode;
	else {
		auto temp1 = head;
		while (temp1 != nullptr) {
			if (temp1->next == nullptr) {
				temp1->next = newNode;
				newNode->prev = temp1;
				break;
			}
			temp1 = temp1->next;
		}
	}
}

// insert a node at n-th position
void insertAtNthPosition(Node* &head, int data, int n) {
	auto newNode = getNewNode(data);

	if (head == nullptr) {
		head = newNode;
		return;
	}

	if (n == 1) {
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
		return;
	}

	auto temp = head;
	for (int i = 0; i < n - 2; ++i) {
		// check for invalid position
		if (temp == nullptr) break;

		temp = temp->next;
	}

	// check for invalid position
	if (temp == nullptr) {
		cout << "Invalid position: " << n << "!\n";
		delete newNode;
		return;
	}

	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next != nullptr)
		temp->next->prev = newNode;

	temp->next = newNode;
}

// delete a node at n-th position
void deleteAtNthPosition(Node* &head, int n) {
	if (head == nullptr) {
		cout << "Invalid! List is empty!\n";
		return;
	}

	auto temp = head;
	if (n == 1) {
		head = temp->next;
		if (head != nullptr)
			head->prev = nullptr;
		delete temp;	// free(temp);
		return;
	}

	for (int i = 0; i < n - 2; ++i) {
		// check for invalid position
		if (temp == nullptr || temp->next == nullptr) break;

		temp = temp->next;
	}

	// check for invalid position
	if (temp == nullptr || temp->next == nullptr) {
		cout << "Invalid position: " << n << "!\n";
		return;
	}

	auto temp1 = temp->next;
	temp->next = temp1->next;
	if (temp->next != nullptr)
		temp->next->prev = temp;
	delete temp1;
}


// traverse Doubly Linked List
void printList(Node* head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

// reverse print Doubly Linked List with iteration
void reversePrint(Node* head) {
	Node* temp = head;

	// get the last item
	while (temp->next != nullptr)
		temp = temp->next;

	// print from backward
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->prev;
	}
	cout << "\n";
}


int main() {
	// initialization
	Node* head;

	// inserting first element
	// insertAtBeginning(head, 2);
	// insertAtBeginning(head, 4);

	// inserting elements at the end
	// insertAtEnd(head, 2);
	// insertAtEnd(head, 4);
	// insertAtEnd(head, 6);
	// insertAtEnd(head, 8);


	// inserting at n-th position
	insertAtNthPosition(head, 2, 1);	// 2
	insertAtNthPosition(head, 4, 2);	// 2 4
	insertAtNthPosition(head, 6, 1);	// 6 2 4
	insertAtNthPosition(head, 5, 2);	// 6 5 2 4
	insertAtNthPosition(head, 8, 3);	// 6 5 8 2 4

	// traverse
	// printList(head);

	// reverse print
	// reversePrint(head);

	// delete from n-th position
	deleteAtNthPosition(head, 3);	// 6 5 2 4
	deleteAtNthPosition(head, 1);	// 5 2 4
	printList(head);
	reversePrint(head);
}