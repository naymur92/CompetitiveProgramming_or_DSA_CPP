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
	Node* tempNode = getNewNode(data);
	
	if (head == nullptr) {
		head = tempNode;
		return;
	}

	head->prev = tempNode;
	tempNode->next = head;
	head = tempNode;
}


// traverse Linked List
void traverseList(Node* head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

int main() {
	// initialization
	Node* head;

	// inserting first element
	insertAtBeginning(head, 2);
	insertAtBeginning(head, 4);

	// inserting elements at the end
	// insertAtEnd(head, 2);
	// insertAtEnd(head, 4);
	// insertAtEnd(head, 6);
	// insertAtEnd(head, 8);

	// inserting at n-th position
	// insertAtNthPosition(head, 2, 1);	// 2
	// insertAtNthPosition(head, 4, 2);	// 2 4
	// insertAtNthPosition(head, 6, 1);	// 6 2 4
	// insertAtNthPosition(head, 5, 2);	// 6 5 2 4
	// insertAtNthPosition(head, 8, 3);	// 6 5 8 2 4

	// traverse
	traverseList(head);
}