/*
https://codeforces.com/problemset/problem/1997/B
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;

		int ans = 0;
		for (int i = 1; i < n - 1; ++i)
		{
			if (s1[i] == '.' && s2[i] == '.' and
				s1[i - 1] != s2[i - 1] and
				s1[i + 1] != s2[i + 1] and
				s1[i - 1] != s2[i + 1]) ans++;
		}

		cout << ans << "\n";
	}
}


/*
4
8
.......x
.x.xx...
2
..
..
3
xxx
xxx
9
..x.x.x.x
x.......x

*/

/*
1
0
0
2

*/