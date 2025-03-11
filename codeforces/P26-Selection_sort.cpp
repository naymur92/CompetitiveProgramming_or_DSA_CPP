/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P26
*/
#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &numbers) {
	/*
	Selection Sort algorithm.
	Runs in O(log n^2) times
	*/
	
	int n = numbers.size();
	for (int i = 0; i < n - 1; ++i) {
		int min_indx = i;
		for (int j = i + 1; j < n; ++j) {
			if (numbers[j] < numbers[min_indx]) {
				min_indx = j;
			}
		}
		swap(numbers[i], numbers[min_indx]);

		for (int i = 0; i < n; ++i) {
			cout << numbers[i] << " \n"[i == n - 1];
		}
	}
}

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	selectionSort(a);
}

int main() {
	solve();
}

/*
7
6 4 2 3 1 0 5


0 4 2 3 1 6 5 
0 1 2 3 4 6 5 
0 1 2 3 4 6 5 
0 1 2 3 4 6 5 
0 1 2 3 4 6 5 
0 1 2 3 4 5 6 

*/