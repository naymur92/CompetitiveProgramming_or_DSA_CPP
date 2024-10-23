#include <bits/stdc++.h>

using namespace std;

class BstNode {
public:
    int data;
    BstNode* left;
    BstNode* right;

    // Constructor to create a new node
    BstNode(int value): data(value), left(nullptr), right(nullptr) {}
};

class BST
{
private:
	BstNode* root;

	void destroyTree(BstNode* root) {
		if (root != nullptr) {
			destroyTree(root->left);
			destroyTree(root->right);

			delete root;
		}
	}

	BstNode* insert(BstNode* root, int data) {
		if (root == nullptr) {
			root = new BstNode(data);
		} else if (data <= root->data) {
			root->left = insert(root->left, data);
		} else {
			root->right = insert(root->right, data);
		}

		return root;
	}

	bool search(BstNode* root, int data) {
		if (root == nullptr) return false;
		else if (root->data == data) return true;
		else if (data < root->data) return search(root->left, data);
		else return search(root->right, data);
	}

	int getHeight(BstNode* root) {
		if (root == nullptr) return -1;
		return max(getHeight(root->left), getHeight(root->right)) + 1;
	}

	BstNode* findMin(BstNode* root) {
		while (root->left != nullptr)
			root = root->left;

		return root;
	}

	BstNode* remove(BstNode* root, int data) {
		if (root == nullptr) return root;

		if (data < root->data)
			root->left = remove(root->left, data);
		else if (data > root->data)
			root->right = remove(root->right, data);
		else {
			if (root->left == nullptr && root->right == nullptr) {
				delete root;
				return nullptr;
			} else if (root->left == nullptr) {
				auto temp = root->right;
				delete root;
				return temp;
			} else if (root->right == nullptr) {
				auto temp = root->left;
				delete root;
				return temp;
			} else {
				auto temp = findMin(root->right);
				root->data = temp->data;
				root->right = remove(root->right, temp->data);
			}
		}

		return root;
	}

	// traversal
	void inOrderTraversal(BstNode* root) {
		if (root == nullptr) return;
		inOrderTraversal(root->left);
		cout << root->data << " ";
		inOrderTraversal(root->right);
	}

	void preOrderTraversal(BstNode* root) {
		if (root == nullptr) return;
		cout << root->data << " ";
		preOrderTraversal(root->left);
		preOrderTraversal(root->right);
	}

	void postOrderTraversal(BstNode* root) {
		if (root == nullptr) return;
		postOrderTraversal(root->left);
		postOrderTraversal(root->right);
		cout << root->data << " ";
	}


public:
	// constructor
	BST(): root(nullptr) {}

	// destructor
	~BST() {
        destroyTree(root);
    }

	// inserting
	void insert(int data) {
        root = insert(root, data);
    }

	// searching
	void search(int data) {
		bool is_found = search(root, data);

		cout << "Number: " << data << " is" << (!is_found ? " not" : "") << " found.\n";
	}

	// removing
	void remove(int data) {
        root = remove(root, data);
    }

    // find minimum
    int findMin() {
        if (root == nullptr) {
            cout << "Tree is empty.\n";
            return -1;
        }
        return findMin(root)->data;
    }

    // find maximum
    int findMax() {
        if (root == nullptr) {
            cout << "Tree is empty.\n";
            return -1;
        }
        BstNode* current = root;
        while (current->right != nullptr) current = current->right;
        return current->data;
    }

    // get tree height
    int getHeight() {
    	return getHeight(root);
    }

    // traversal
    void inOrderTraversal() {
        inOrderTraversal(root);
        cout << "\n";
    }

    void preOrderTraversal() {
        preOrderTraversal(root);
        cout << "\n";
    }

    void postOrderTraversal() {
        postOrderTraversal(root);
        cout << "\n";
    }

};


int main() {
	BST bst;

	bst.insert(15);
	bst.insert(10);
	bst.insert(20);
	bst.insert(25);
	bst.insert(17);
	bst.insert(12);
	bst.insert(8);

	bst.inOrderTraversal();    // 8 10 12 15 17 20 25 
    bst.preOrderTraversal();   // 15 10 8 12 20 17 25 
    bst.postOrderTraversal();  // 8 12 10 17 25 20 15 

    cout << "Min: " << bst.findMin() << endl;
    cout << "Max: " << bst.findMax() << endl;
    cout << "Height: " << bst.getHeight() << endl;

    bst.search(10);
    bst.search(5);

    bst.remove(10);
    bst.inOrderTraversal();
}