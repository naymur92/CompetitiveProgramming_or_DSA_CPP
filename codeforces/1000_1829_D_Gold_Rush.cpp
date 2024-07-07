/*
https://codeforces.com/problemset/problem/1829/D
*/

#include <bits/stdc++.h>

using namespace std;

bool check(int n, int m) {
	if (m == n) return true;
	else if (n % 3 != 0 || m > n) return false;
	else return check(n / 3, m) || check(2 * n / 3, m);
}

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, m;
		cin >> n >> m;

		cout << (check(n, m) ? "YES\n" : "NO\n");
	}
}


/*
11
6 4
9 4
4 2
18 27
27 4
27 2
27 10
1 1
3 1
5 1
746001 2984004

*/

/*
YES
YES
NO
NO
YES
YES
NO
YES
YES
NO
NO

*/