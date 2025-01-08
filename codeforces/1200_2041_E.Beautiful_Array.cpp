/*
https://codeforces.com/problemset/problem/2041/E
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int a, b;
	cin >> a >> b;

	if (a == b) {
		cout << 1 << "\n" << a << "\n";
	} else {
		cout << 3 << "\n" << b << " " << b << " " << (3 * a - 2 * b) << "\n";
	}
}


/*
3 4


-100 -100

*/

/*
4
3 -1 5 5


1
-100

*/