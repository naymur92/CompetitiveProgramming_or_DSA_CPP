/*
https://codeforces.com/problemset/problem/1515/B
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;

// bool check

bool checkNumber(ul n) {
	if (n % 2 == 0 && ((ul) sqrt(n / 2) * (ul) sqrt(n / 2)) == n / 2) return true;
	else if (n % 4 == 0 && ((ul) sqrt(n / 4) * (ul) sqrt(n / 4)) == n / 4) return true;
	else return false;
}

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		ul n;
		cin >> n;

		// cout << (ul) sqrt(n) * (ul) sqrt(n) << endl;

		cout << (checkNumber(n) ? "YES" : "NO") << "\n";
	}
}


/*
3
2
4
6

*/

/*
YES
YES
NO

*/