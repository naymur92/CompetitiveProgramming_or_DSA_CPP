/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P24
*/
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &numbers) {
	/*
	Bubble Sort algorithm.
	Runs in O(n^2) times
	*/
	
	int n = numbers.size();
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (numbers[j] > numbers[j + 1]) swap(numbers[j], numbers[j + 1]);
		}

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

	bubbleSort(a);
}

int main() {
	solve();
}

/*
6
4 2 1 3 5 0


2 1 3 4 0 5 
1 2 3 0 4 5 
1 2 0 3 4 5 
1 0 2 3 4 5 
0 1 2 3 4 5 

*/