#include <bits/stdc++.h>

using namespace std;

// class declaration
class Node
{
public:
	int data;
	Node* next;	
};

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

// traverse Linked List
void traverseList(Node* head) {
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

void reverseLinkListUsingStack(Node* &head) {
	if (head == nullptr)
		return;

	stack<struct Node*> s;

	auto temp = head;
	while (temp != nullptr) {
		s.push(temp);
		temp = temp->next;
	}

	Node* temp1 = s.top();
	head = temp1;
	s.pop();

	while (!s.empty()) {
		temp1->next = s.top();
		s.pop();
		temp1 = temp1->next;
	}
	temp1->next = nullptr;
}

int main() {
	// initialization
	Node* head;

	// inserting elements at the end
	insertAtEnd(head, 2);
	insertAtEnd(head, 4);
	insertAtEnd(head, 6);
	insertAtEnd(head, 8);

	// traverse
	traverseList(head);

	reverseLinkListUsingStack(head);
	traverseList(head);
}