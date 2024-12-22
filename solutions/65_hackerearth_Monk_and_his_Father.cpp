/*
https://www.hackerearth.com/problem/algorithm/monk-and-his-father-93b639f4/
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		long long n;
		cin >> n;

		cout << __builtin_popcountll(n) << "\n";
	}
}

/*
2
1
2
*/


/*
1
1
*/