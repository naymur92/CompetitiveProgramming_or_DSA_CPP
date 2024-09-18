#include <bits/stdc++.h>

using namespace std;

void countingSort(vector<long> &numbers) {
	/*
	Counting Sort algorithm.

	Counting sort is a very efficient algorithm but it can only be used when the
	constant c is small enough.

	Runs in O(n) times
	*/

	// here array values does not exeeded n
	int n = numbers.size();

	vector<int> bookkeeping_array(n);
	for (int i = 0; i < n; ++i) {
		bookkeeping_array[numbers[i]]++;
	}

	vector<long> sorted_array;
	for (int i = 0; i < n; ++i)
	{
		while (bookkeeping_array[i]--) sorted_array.push_back(i);
	}

	numbers = sorted_array;
}

bool isSorted(vector<long> &numbers) {
	int size = numbers.size();
	for (int i = 0; i < size - 1; ++i) {
		if(numbers[i] > numbers[i + 1]) return false;
	}
	return true;
}

int main(){
	int n = 100000;
	vector<long> numbers(n);

	for (int i = 0; i < n; ++i) {
		cin >> numbers[i];
		numbers[i] %= n;
		// if (numbers[i] < 50) 
		// cout << numbers[i] << "\n";
	}

	// check original list is sorted
	cout << "Original array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";

	// call sorting algorithm
	countingSort(numbers);	

	// for (auto &num: numbers) cout << num << "\n";

	// check sorted list is sorted
	cout << "Sorted array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";
}
