/*
https://codeforces.com/problemset/problem/466/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int cost = min((n / m) * b, (n / m) * m * a);
	int rem = n % m;

	cost += min(b, rem * a);

	cout << cost << "\n";
}


/*
6 2 1 2


5 2 2 3


10 3 5 1

*/

/*
6


8


4
*/