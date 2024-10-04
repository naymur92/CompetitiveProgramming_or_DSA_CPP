#include <bits/stdc++.h>

using namespace std;

// class declaration of Node
class Node
{
public:
	int data;
	Node* next;

	// constructor
	Node(int val): data(val), next(nullptr) {}
};

// class declaration of Linked List
class LinkedList
{
private:
	Node* head;

public:
	// constructor
	LinkedList(): head(nullptr) {}

	// insert at beginning
	void insertAtBeginning(int val) {
		auto newNode = new Node(val);
		newNode->next = head;
		head = newNode;
	}

	// insert at end
	void insertAtEnd(int val) {
		auto newNode = new Node(val);

		if (head == nullptr) {
			head = newNode;
			return;
		}

		auto temp = head;
		// go to last item
		while (temp->next != nullptr)
			temp = temp->next;

		temp->next = newNode;
	}

	// insert at n-th position
	void insertAtNthPosition(int val, int n) {
		if (n == 1) {
			insertAtBeginning(val);
			return;
		}

		auto newNode = new Node(val);

		auto temp = head;
		for (int i = 0; i < n - 2; ++i) {
			// check for invalid position
			if (temp == nullptr)
				break;

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

	// Delete at the nth position
    void deleteAtNthPosition(int n) {
        if (head == nullptr) {
            cout << "List is empty!\n";
            return;
        }

        auto temp = head;
        if (n == 1) {
            head = temp->next;
            delete temp;
            return;
        }

        for (int i = 0; i < n - 2; ++i) {
            if (temp == nullptr || temp->next == nullptr)
            	break;

            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Invalid position: " << n << "!\n";
            return;
        }

        auto temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }

    // reverse linked list using iterative method
	void reverseWithIterative() {
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
	void reverseWithRecursion(Node *item) {
		if (item == nullptr || item->next == nullptr) {
			head = item;
			return;
		}
		reverseWithRecursion(item->next);

		item->next->next = item;
		item->next = nullptr;
	}

	void reverseWithRecursion() {
        reverseWithRecursion(head);
    }

	// traverse/print Linked List
	void traverseList() const {
		auto temp = head;
		while (temp != nullptr) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";
	}

	void printWithRecursion(Node* item) const {
		if (item == nullptr) return;

		cout << item->data << " ";
		printWithRecursion(item->next);
	}

	void printWithRecursion() const {
        printWithRecursion(head);
        cout << "\n";
    }

	void reversePrintWithRecursion(Node* item) const {
		if (item == nullptr) return;

		reversePrintWithRecursion(item->next);
		cout << item->data << " ";
	}

	void reversePrintWithRecursion() const {
        reversePrintWithRecursion(head);
        cout << "\n";
    }

	// Destructor to free up the memory
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};


int main() {
	// initialization
	LinkedList list;


	// inserting first element
	// list.insertAtBeginning(2);
	// list.insertAtBeginning(4);

	// inserting elements at the end
	list.insertAtEnd(2);
	list.insertAtEnd(4);
	list.insertAtEnd(6);
	list.insertAtEnd(8);

	// inserting at n-th position
	// list.insertAtNthPosition(2, 1);	// 2
	// list.insertAtNthPosition(4, 2);	// 2 4
	// list.insertAtNthPosition(6, 1);	// 6 2 4
	// list.insertAtNthPosition(5, 2);	// 6 5 2 4
	// list.insertAtNthPosition(8, 3);	// 6 5 8 2 4

	// traverse
	// list.traverseList();

	// delete from n-th position
	// list.deleteAtNthPosition(3);	// 6 5 2 4
	// list.deleteAtNthPosition(1);	// 5 2 4
	// list.traverseList();

	// list.reverseWithIterative();
	// list.traverseList();

	// list.reverseWithRecursion();
	// list.traverseList();


	// print with recursion
	list.printWithRecursion();	// 2 4 6 8

	// reverse print with recursion
	list.reversePrintWithRecursion();	// 8 6 4 2
}