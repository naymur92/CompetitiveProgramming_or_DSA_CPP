/*
https://codeforces.com/problemset/problem/2043/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, d;
		cin >> n >> d;

		cout << "1 ";
		if (d % 3 == 0 or n >= 3)
			cout << "3 ";
		if (d % 5 == 0)
			cout << "5 ";
		if (d % 7 == 0 or n >= 3)
			cout << "7 ";
		if (n >= 6 or (d % 3 == 0 and n >= 3) or d % 9 == 0)
			cout << "9 ";
		cout << "\n";
	}
}


/*
3
2 6
7 1
8 5

*/

/*
1 3 
1 3 7 9 
1 3 5 7 9 

*/