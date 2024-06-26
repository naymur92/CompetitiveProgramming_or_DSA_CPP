/*
https://codeforces.com/problemset/problem/1550/B
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, a, b;
		string s;
		cin >> n >> a >> b;
		cin >> s;

		// solution copied from tutorial

		int m = unique(s.begin(), s.end()) - s.begin();
		cout << n * a + max(n * b, (m / 2 + 1) * b) << '\n';
	}
}


/*
3
3 2 0
000
5 -2 5
11001
6 1 -4
100111

*/

/*
6
15
-2

*/