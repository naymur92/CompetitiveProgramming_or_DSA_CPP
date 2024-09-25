#include <bits/stdc++.h>

using namespace std;

// class declaration
class Node
{
public:
	int data;
	Node* next;	
};

// insert first element
void insertAtBeginning(Node* &head, int data) {
	Node* tempNode = new Node();
	tempNode->data = data;
	tempNode->next = nullptr;

	// link previous item
	if (head != nullptr) tempNode->next = head;

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
	delete temp1;
}

// reverse linked list
void reverseLinkedList(Node* &head) {
	Node *current = head, *prev = nullptr, *next = nullptr;

	while (current != nullptr) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

// reverse linked list using recursion
void reverseLinkedListWithRecursion(Node* &head, Node *item) {
	if (item == nullptr || item->next == nullptr) {
		head = item;
		return;
	}
	reverseLinkedListWithRecursion(head, item->next);

	item->next->next = item;
	item->next = nullptr;
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

void printListWithRecursion(Node* item) {
	if (item == nullptr) return;

	cout << item->data << " ";
	printListWithRecursion(item->next);
}

void reversePrintListWithRecursion(Node* item) {
	if (item == nullptr) return;

	reversePrintListWithRecursion(item->next);
	cout << item->data << " ";
}

int main() {
	// initialization
	Node* head;
	// head = nullptr;


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
	// traverseList(head);

	// delete from n-th position
	// deleteAtNthPosition(head, 3);	// 6 5 2 4
	// deleteAtNthPosition(head, 1);	// 5 2 4
	// traverseList(head);


	// print with recursion
	// printListWithRecursion(head);	// 2 4 6 8
	// cout << "\n";

	// reverse print with recursion
	// reversePrintListWithRecursion(head);	// 8 6 4 2

	// reverse the list
	// reverseLinkedList(head);

	// reverse linked list using recursion
	// reverseLinkedListWithRecursion(head, head);
	// traverseList(head);
}