#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &numbers, int element) {
	int low = 0, high = numbers.size() - 1;

	while (high - low > 1) {
		int mid = (low + high) / 2;

		if (numbers[mid] < element) {
			low = mid + 1;
		} else {
			high = mid;
		}
	}

	if (numbers[low] >= element) return low;
	else if (numbers[high] >= element) return high;
	else return -1;
}

int upper_bound(vector<int> &numbers, int element) {
	int low = 0, high = numbers.size() - 1;

	while (high - low > 1) {
		int mid = (low + high) / 2;

		if (numbers[mid] <= element) {
			low = mid + 1;
		} else {
			high = mid;
		}
	}

	if (numbers[low] > element) return low;
	else if (numbers[high] > element) return high;
	else return -1;
}

int main() {
	int n;
	cin >> n;
	
	vector<int> numbers(n);

	for (auto &num: numbers) cin >> num;

	int search;
	cin >> search;

	cout << lower_bound(numbers, search) << "\n";	
	cout << upper_bound(numbers, search) << "\n";	
}

/*
6
2 3 4 6 7 8
8
*/