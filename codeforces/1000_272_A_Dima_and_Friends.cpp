/*
https://codeforces.com/problemset/problem/272/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, total = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int f;
		cin >> f;
		total += f;
	}

	int ways = 0;
	for (int i = 1; i <= 5; ++i) {
		if ((total + i) % (n + 1) != 1) ways++;
	}

	cout << ways << "\n";
}


/*
1
1


1
2


2
3 5


*/

/*
3

2

3

*/