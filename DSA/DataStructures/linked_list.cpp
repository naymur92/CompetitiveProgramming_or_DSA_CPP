#include <bits/stdc++.h>

using namespace std;

// declaration class
class Node
{
public:
	int data;
	Node* next;	
};

// insert first element
void insertAtBegenning(Node* &head, int data) {
	Node* tempNode = new Node();
	tempNode->data = data;
	tempNode->next = nullptr;

	head = tempNode;
}

// insert at last
void insertAtEnd(Node* &head, int data) {
	auto newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;

	if (head == nullptr) head = newNode;
	else {
		auto temp1 = head;
		while (temp1 != nullptr) {
			if (temp1->next == nullptr) {
				temp1->next = newNode;
				break;
			}
			temp1 = temp1->next;
		}
	}
}

// insert a node at n-th position
void insertAtNthPosition(Node* &head, int data, int n) {
	auto newNode = new Node();
	newNode->data = data;
	newNode->next = nullptr;

	if (n == 1) {
		newNode->next = head;
		head = newNode;
		return;
	}

	auto temp = head;
	for (int i = 0; i < n - 2; ++i) temp = temp->next;
	newNode->next = temp->next;
	temp->next = newNode;
}

// delete a node at n-th position
void deleteAtNthPosition(Node* &head, int n) {
	auto temp = head;
	if (n == 1) {
		head = temp->next;
		delete temp;	// free(temp);
		return;
	}

	for (int i = 0; i < n - 2; ++i) temp = temp->next;
	auto temp1 = temp->next;
	temp->next = temp1->next;
	delete temp1;
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
	// head = nullptr;


	// inserting first element
	// insertAtBegenning(head, 22);

	// inserting elements at the end
	// insertAtEnd(head, 2);
	// insertAtEnd(head, 4);
	// insertAtEnd(head, 6);

	// inserting at n-th position
	insertAtNthPosition(head, 2, 1);	// 2
	insertAtNthPosition(head, 4, 2);	// 2 4
	insertAtNthPosition(head, 6, 1);	// 6 2 4
	insertAtNthPosition(head, 5, 2);	// 6 5 2 4
	insertAtNthPosition(head, 8, 3);	// 6 5 8 2 4

	// traverse
	traverseList(head);

	deleteAtNthPosition(head, 3);	// 6 5 2 4
	deleteAtNthPosition(head, 1);	// 5 2 4
	traverseList(head);
}