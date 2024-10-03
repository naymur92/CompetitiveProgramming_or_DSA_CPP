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

		// find unique parts of string
		int un_part = unique(s.begin(), s.end()) - s.begin();
		cout << n * a + max(n * b, (un_part / 2 + 1) * b) << '\n';

		// if (b >= 0)
		// 	cout << n * a + n * b << "\n";
		// else {
		// 	cout << n * a + (un_part / 2 + 1) * b << "\n";
		// }
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