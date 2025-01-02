/*
https://codeforces.com/problemset/problem/2044/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int sum = 1 + 2 + 3 + 4 + 5;
	int t = 4;
	while (t--) {
		int num;
		cin >> num;
		sum -= num;
	}
	cout << sum << "\n";
}


/*
1 3 2 5

*/

/*
4
*/