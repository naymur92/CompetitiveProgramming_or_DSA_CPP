#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<long> &numbers) {
	/*
	Bubble Sort algorithm.
	Runs in O(n^2) times
	*/
	
	int n = numbers.size();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (numbers[j] > numbers[j + 1]) swap(numbers[j], numbers[j + 1]);
		}
	}
}

bool isSorted(vector<long> &numbers) {
	int size = numbers.size();
	for (int i = 0; i < size - 1; ++i) {
		if(numbers[i] > numbers[i + 1]) return false;
	}
	return true;
}

int main(){
	int n = 10000;
	vector<long> numbers(n);

	for (int i = 0; i < n; ++i) {
		cin >> numbers[i];
		numbers[i] %= n;
	}

	// check original list is sorted
	cout << "Original array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";

	// call sorting algorithm
	bubbleSort(numbers);	

	// for (auto &num: numbers) cout << num << "\n";

	// check sorted list is sorted
	cout << "Sorted array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";
}