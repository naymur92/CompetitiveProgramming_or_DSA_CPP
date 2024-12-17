/*
https://codeforces.com/problemset/problem/2034/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	/*int ans = 0;

	// for 2x25
	ans += n / 2;

	// for 2x21 and 1x18
	ans += n / 2;

	// for remaining 25 and 21
	ans += n % 2;

	// for remaining 18
	ans += (n - n / 2 + 3 - 1) / 3;

	cout << ans << "\n";*/

	// simplifiying the equation
	// n + (n - n / 2 + 2) / 3;

	cout << (n + (n - n / 2 + 2) / 3) << "\n";
}


/*
1

3

1000
*/

/*
2

4

1167
*/