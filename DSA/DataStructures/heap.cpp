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

	void heapifyDown(int index) {
		int extreme = index;
		int left = leftChild(index);
		int right = rightChild(index);

		if (left < heap.size() && compare(heap[left], heap[extreme]))
			extreme = left;
		if (right < heap.size() && compare(heap[right], heap[extreme]))
			extreme = right;

		if (extreme != index) {
			swap(heap[index], heap[extreme]);
			heapifyDown(extreme);
		}
	}

public:
	// constructor
	Heap(bool minHeap = true) : isMinHeap(minHeap) {}

	void insert(int data) {
		heap.push_back(data);

		heapifyUp(heap.size() - 1);
	}

	int getRoot() {
		if (heap.empty()) {
			cerr << "Heap is empty!\n";

			return -1;
		}

		return heap[0];
	}

	int extractRoot() {
		if (heap.empty()) {
			cerr << "Heap is empty!\n";

			return -1;
		}

		int root = heap[0];
		heap[0] = heap.back();

		heap.pop_back();

		heapifyDown(0);

		return root;
	}

	void display() {
		for (int data: heap) cout << data << " ";
		cout << "\n";
	}

	bool isEmpty() { return heap.empty(); }
    int size() { return heap.size(); }

    // Heap Sort Function (Sorts given array)
    static vector<int> heapSort(vector<int> arr, bool isAscending = true) {
        Heap tempHeap(isAscending);
        
        // Step 1: Insert all elements into the heap
        for (int val : arr) {
            tempHeap.insert(val);
        }

        // Step 2: Extract elements from heap (sorted order)
        vector<int> sortedArr;
        while (!tempHeap.isEmpty()) {
            sortedArr.push_back(tempHeap.extractRoot());
        }

        return sortedArr;
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


	maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(15);
    maxHeap.insert(30);
    maxHeap.insert(5);

    cout << "Max Heap: ";
    maxHeap.display();

    // Heap Sort Example
    vector<int> arr = {4, 10, 3, 5, 1};
    cout << "\nOriginal Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\n";

    vector<int> sortedArr = Heap::heapSort(arr, true); // Sort in ascending order
    cout << "Sorted using MinHeap: (ASC) ";
    for (int num : sortedArr) cout << num << " ";
    cout << "\n";

    vector<int> sortedArrDesc = Heap::heapSort(arr, false); // Sort in descending order
    cout << "Sorted using MaxHeap: (DESC) ";
    for (int num : sortedArrDesc) cout << num << " ";
    cout << "\n";
}