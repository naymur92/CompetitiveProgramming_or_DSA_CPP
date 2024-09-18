#include <bits/stdc++.h>

using namespace std;

vector<int> arrayMerge(vector<int> less_than_pivot, int pivot, vector<int> greater_than_pivot) {
	vector<int> new_numbers;
	new_numbers = less_than_pivot;
	new_numbers.push_back(pivot);
	for (auto &num: greater_than_pivot) new_numbers.push_back(num);

	return new_numbers;
}

vector<int> quickSort(vector<int> &numbers) {
	/*
	Quick Sort algorithm.
	Runs in O(nlog n) times
	*/

	int n = numbers.size();
	
	if (n <= 1) return numbers;


	// devide
	vector<int> less_than_pivot;
	vector<int> greater_than_pivot;

	int pivot = numbers[0];
	for (int i = 1; i < n; ++i) {
		if (numbers[i] < pivot) less_than_pivot.push_back(numbers[i]);
		else greater_than_pivot.push_back(numbers[i]);
	}

	// recursive call
	return arrayMerge(quickSort(less_than_pivot), pivot, quickSort(greater_than_pivot));
}

bool isSorted(vector<int> &numbers) {
	int size = numbers.size();
	for (int i = 0; i < size - 1; ++i) {
		if(numbers[i] > numbers[i + 1]) return false;
	}
	return true;
}

int main(){
	int n = 1000000;	// change the size
	vector<int> numbers(n);

	for (int i = 0; i < n; ++i) {
		long long num;
		cin >> num;
		// numbers[i] = (int) num % 100000;
		numbers[i] = (int) num;
	}

	// check original list is sorted
	cout << "Original array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";

	// call sorting algorithm
	vector<int> sorted_array;
	sorted_array = quickSort(numbers);	

	// for (auto &num: sorted_array) cout << num << "\n";

	// check sorted list is sorted
	cout << "Sorted array is " << (isSorted(sorted_array) ? "sorted" : "not sorted") << ".\n";
}