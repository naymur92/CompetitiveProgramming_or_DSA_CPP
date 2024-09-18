#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &numbers) {
	/*
	Selection Sort algorithm.
	Runs in O(log n^2) times
	*/
	
	int n = numbers.size();
	for (int i = 0; i < n; ++i) {
		int sm_in = i;
		for (int j = i + 1; j < n; ++j) {
			if (numbers[j] < numbers[sm_in]) sm_in = j;
		}
		swap(numbers[i], numbers[sm_in]);
	}
}

bool isSorted(vector<int> &numbers) {
	int size = numbers.size();
	for (int i = 0; i < size - 1; ++i) {
		if(numbers[i] > numbers[i + 1]) return false;
	}
	return true;
}

int main(){
	int n = 10000;	// change the size
	vector<int> numbers(n);

	for (int i = 0; i < n; ++i) {
		long long num;
		cin >> num;
		numbers[i] = (int) num % 100000;
	}

	// check original list is sorted
	cout << "Original array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";

	// call sorting algorithm
	selectionSort(numbers);	

	// for (auto &num: numbers) cout << num << "\n";

	// check sorted list is sorted
	cout << "Sorted array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";
}