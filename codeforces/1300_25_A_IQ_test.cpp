/*
https://codeforces.com/problemset/problem/25/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int odd_count = 0, even_count = 0;
	int last_odd = -1, last_even = -1;

	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		if (a % 2 == 0) {
			even_count++;
			last_even = i + 1;
		} else {
			odd_count++;
			last_odd = i + 1;
		}
	}

	cout << (odd_count == 1 ? last_odd : last_even) << "\n";
}


/*
5
2 4 7 8 10



4
1 2 1 1


*/

/*

3


2



*/