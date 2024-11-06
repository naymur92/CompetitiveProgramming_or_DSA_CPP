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

	// iterative approach
	/*BstNode* findMin(BstNode* root) {
		while (root->left != nullptr)
			root = root->left;

		return root;
	}*/

	// recursive approach
	BstNode* findMin(BstNode* root) {
		if (root->left == nullptr) return root;

		return findMin(root->left);
	}

	BstNode* findMax(BstNode* root) {
		if (root->right == nullptr) return root;

		return findMax(root->right);
	}

	BstNode* remove(BstNode* root, int data) {
		/*
		Case 1: No child
		Case 2: One child
		Case 3: 2 child
		*/
		if (root == nullptr) return root;

		if (data < root->data)
			root->left = remove(root->left, data);
		else if (data > root->data)
			root->right = remove(root->right, data);
		else {
			// Case 1
			if (root->left == nullptr && root->right == nullptr) {
				delete root;
				root = nullptr;
			}
			// Case 2
			else if (root->left == nullptr) {
				auto temp = root;
				root = root->right;
				delete temp;
			} else if (root->right == nullptr) {
				auto temp = root;
				root = root->left;
				delete temp;
			}
			// Case 3
			else {
				auto temp = findMax(root->left);
				root->data = temp->data;
				root->left = remove(root->left, temp->data);
			}
		}

		return root;
	}

	// traversal of BST
	// Depth-first search
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

	// Breadth-first search
	void levelOrder(BstNode* root) {
		if (root == nullptr) return;

		queue<BstNode*> Q;
		Q.push(root);

		while (!Q.empty()) {
			auto current = Q.front();
			cout << current->data << " ";

			if (current->left != nullptr)
				Q.push(current->left);

			if (current->right != nullptr)
				Q.push(current->right);

			Q.pop();
		}
	}

	// checking the Tree is BST or not?
	/*bool isSubtreeLesser(BstNode* root, int value) {
		if (root == nullptr) return true;

		return (root->data <= value 	// < for no duplicates
			&& isSubtreeLesser(root->left, value)
			&& isSubtreeLesser(root->right, value));
	}

	bool isSubtreeGreater(BstNode* root, int value) {
		if (root == nullptr) return true;

		return (root->data > value
			&& isSubtreeGreater(root->left, value)
			&& isSubtreeGreater(root->right, value));
	}

	bool isBinarySearchTree(BstNode* root) {
		if (root == nullptr) return true;

		return (isSubtreeLesser(root->left, root->data)
			&& isSubtreeGreater(root->right, root->data)
			&& isBinarySearchTree(root->left)
			&& isBinarySearchTree(root->right));
	}*/

	// another approach
	bool isBinarySearchTree(BstNode* root, int minValue, int maxValue) {
		if (root == nullptr) return true;

		return (root->data > minValue
			&& root->data <= maxValue	// < for no duplicates
			&& isBinarySearchTree(root->left, minValue, root->data)
			&& isBinarySearchTree(root->right, root->data, maxValue));
	}

	// check BST using inorder traversal
	bool checkBstInOrder(BstNode* root, int minValue) {
		if (root == nullptr) return true;

		if (!checkBstInOrder(root->left, minValue))
			return false;

		if (root->data < minValue)
			return false;

		minValue = root->data;

		return checkBstInOrder(root->right, minValue);
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
        
        return findMax(root)->data;
    }

    // get tree height
    int getHeight() {
    	return getHeight(root);
    }

    // traversal of BST
    // Depth-first search
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

    // Breadth-first search
    void levelOrder() {
    	levelOrder(root);
    	cout << "\n";
    }

    // checking the Tree is BST or not?
    bool isBinarySearchTree() {
    	// return isBinarySearchTree(root);
    	return isBinarySearchTree(root, INT_MIN, INT_MAX);
    }

    // checking using inorder traversal
    bool isBST() {
    	return checkBstInOrder(root, INT_MIN);
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
	bst.insert(12);
	bst.insert(8);
	bst.insert(8);
	bst.insert(13);
	bst.insert(9);

	bst.inOrderTraversal();		// 8 10 12 15 17 20 25 
    bst.preOrderTraversal();	// 15 10 8 12 20 17 25 
    bst.postOrderTraversal();	// 8 12 10 17 25 20 15 
    bst.levelOrder();			// 15 10 20 8 12 17 25 

    cout << "\n";

    cout << "Min: " << bst.findMin() << endl;
    cout << "Max: " << bst.findMax() << endl;
    cout << "Height: " << bst.getHeight() << endl;

    cout << "\n";

    // checking the Tree is BST or not?
    cout << "The tree is " << (bst.isBinarySearchTree() ? "" : "not ") << "a BST.\n";
    cout << "The tree is " << (bst.isBST() ? "" : "not ") << "a BST.\n";

    cout << "\n";

    bst.search(10);
    bst.search(5);

    cout << "\n";

    bst.remove(10);
    bst.inOrderTraversal();

    cout << "\n";

    // checking the Tree is BST or not?
    cout << "The tree is " << (bst.isBinarySearchTree() ? "" : "not ") << "a BST.\n";
    cout << "The tree is " << (bst.isBST() ? "" : "not ") << "a BST.\n";
}