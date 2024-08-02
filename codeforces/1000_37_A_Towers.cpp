/*
https://codeforces.com/problemset/problem/37/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, int> tower;

	int largest = 0;
	for (int i = 0; i < n; ++i) {
		int l;
		cin >> l;
		tower[l]++;

		largest = max(largest, tower[l]);
	}
	cout << largest << " " << tower.size() << "\n";
}


/*
3
1 2 3



4
6 5 6 7



*/

/*
1 3


2 3

*/