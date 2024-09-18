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
	insertAtBegenning(head, 22);

	
	// traverse
	traverseList(head);
}