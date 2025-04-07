#include <bits/stdc++.h>

using namespace std;

class Heap {
private:
	vector<int> heap;
	bool isMinHeap;

	bool compare (int a, int b) {
		return isMinHeap ? (a < b) : (a > b);
	}

	int parent (int index) {
		return (index - 1) / 2;
	}

	int leftChild (int index) {
		return 2 * index + 1;
	}

	int rightChild (int index) {
		return 2 * index + 2;
	}

	void heapifyUp (int index) {
		while (index > 0 && compare(heap[index], heap[parent(index)])) {
			swap(heap[index], heap[parent(index)]);
			index = parent(index);
		}
	}

public:
	// constructor
	Heap(bool minHeap = true) : isMinHeap(minHeap) {}

	void insert(int data) {
		heap.push_back(data);

		heapifyUp(heap.size() - 1);
	}

	void display() {
		for (int data: heap) cout << data << " ";
		cout << "\n";
	}
};

int main() {
	Heap minHeap(true);
	Heap maxHeap(false);

	minHeap.insert(10);
    minHeap.insert(20);
    minHeap.insert(15);
    minHeap.insert(30);
    minHeap.insert(5);

    cout << "Min Heap: ";
    minHeap.display();
}