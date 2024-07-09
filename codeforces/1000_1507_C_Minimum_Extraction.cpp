/*
https://codeforces.com/problemset/problem/1607/C
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<ll> a(n);
		for (auto &num: a) cin >> num;
		sort(a.begin(), a.end());

		ll m, tot;
		m = tot = a[0];
		for (int i = 1; i < n; ++i) {
			ll cur = a[i] - tot;
			tot += cur;
			if (cur > m) m = cur;
		}
		cout << m << "\n";
	}
}


/*
8
1
10
2
0 0
3
-1 2 0
4
2 10 1 7
2
2 3
5
3 2 -4 -2 0
2
-1 1
1
-2

*/

/*
10
0
2
5
2
2
2
-2

*/