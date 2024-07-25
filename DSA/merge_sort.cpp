#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &numbers, int l, int r, int mid) {
	// split numbers into 2 arrays L and R
	vector<int> L;
	vector<int> R;	

	// copy left to mid into L
	for (int i = l; i <= mid; ++i)
	{
		L.push_back(numbers[i]);
	}

	// copy mid to right into R
	for (int i = mid + 1; i <= r; ++i)
	{
		R.push_back(numbers[i]);
	}


	// merging
	int l_index = 0, r_index = 0, i = l;

	while (l_index < L.size() && r_index < R.size()) {
		if (L[l_index] < R[r_index]) {
			numbers[i++] = L[l_index];
			l_index++;
		} else {
			numbers[i++] = R[r_index];
			r_index++;
		}
	}
	while (l_index < L.size()) {
		numbers[i++] = L[l_index];
		l_index++;
	}
	while (r_index < R.size()) {
		numbers[i++] = R[r_index];
		r_index++;
	}

	// alternate of while loop
	// L.push_back(INT_MAX);
	// R.push_back(INT_MAX);
	// for (int i = l; i <= r; ++i)
	// {
	// 	if(L[l_index] <= R[r_index]) {
	// 		numbers[i] = L[l_index];
	// 		l_index++;
	// 	} else {
	// 		numbers[i] = R[r_index];
	// 		r_index++;
	// 	}
	// }
}

void mergeSort(vector<int> &numbers, int l, int r) {
	/*
	Merge Sort algorithm.
	Runs in O(nlog n) times
	*/
	
	if (l == r) return;

	int mid = (l + r) / 2;

	// recursive call
	mergeSort(numbers, l, mid);
	mergeSort(numbers, mid + 1, r);
	
	merge(numbers, l, r, mid);
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
	mergeSort(numbers, 0, n - 1);	

	// for (auto &num: numbers) cout << num << "\n";

	// check sorted list is sorted
	cout << "Sorted array is " << (isSorted(numbers) ? "sorted" : "not sorted") << ".\n";
}