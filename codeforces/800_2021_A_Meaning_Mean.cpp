/*
https://codeforces.com/problemset/problem/2021/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		
		int a[n];
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n);

		int ans = a[0];
		for (int i = 1; i < n; ++i)
			ans = (ans + a[i]) / 2;

		cout << ans << "\n";
	}
}


/*
3
5
1 7 8 4 5
3
2 6 5
5
5 5 5 5 5

*/

/*
6
4
5

*/