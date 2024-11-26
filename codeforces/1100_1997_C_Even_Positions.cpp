/*
https://codeforces.com/problemset/problem/1997/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;

		stack<int> st;
		int cost = 0;
		for (int i = 0; i < n; ++i)
		{
			if (st.empty()) st.push(i);
			else {
				if (s[i] != '(') {
					cost += i - st.top();
					st.pop();
				} else {
					st.push(i);
				}
			}
		}
		cout << cost << "\n";
	}
}


/*
4
6
_(_)_)
2
_)
8
_)_)_)_)
8
_(_)_(_)

*/

/*
5
1
4
8

*/