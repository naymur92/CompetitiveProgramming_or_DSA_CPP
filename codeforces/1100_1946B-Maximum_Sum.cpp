/*
https://codeforces.com/problemset/problem/1946/B
*/

#include <bits/stdc++.h>

using namespace std;

const int P = 1e9 + 7;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (auto &num: a) cin >> num;

		long long S = 0, sum = 0;
	    long long cur = 0;
	    for (int i = 0; i < n; i++) {
	        sum += a[i];
	        cur += a[i];
	        cur = max(cur, 0LL);
	        S = max(S, cur);
	    }
	    sum = (sum % P + P) % P;
	    S = S % P;
	    int t = 1;
	    for (int i = 0; i < k; i++) {
	        t = t * 2 % P;
	    }
	    int ans = (sum + S * t - S + P) % P;
	    cout << ans << '\n';
	}
}


/*
12
2 2
-4 -7
3 3
2 2 8
1 7
7
5 1
4 -2 8 -12 9
7 4
8 14 -9 6 0 -1 3
7 100
5 3 -8 12 -5 -9 3
6 1000
-1000000000 -1000000000 -1000000000 -1000000000 -1000000000 -1000000000
2 1
1000000000 8
5 4
0 0 0 0 0
6 10
48973 757292 58277 -38574 27475 999984
7 1
-1000 1000 -1000 1000 -1000 1000 -1000
10 10050
408293874 -3498597 7374783 295774930 -48574034 26623784 498754833 -294875830 283045804 85938045

*/

/*
999999996
96
896
17
351
716455332
42
2
0
897909241
0
416571966

*/