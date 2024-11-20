/*
https://codeforces.com/problemset/problem/2008/D
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
		int p[n + 1] = {0};
		string s;

		for (int i = 1; i <= n; ++i) 
		{
			cin >> p[i];
		}

		cin >> s;

		int b[n + 1] = {0}, mp[n + 1] = {0};

		for (int i = 1; i <= n; ++i)
		{
			if (mp[i]) continue;

			int ct = 0;
			while (!mp[i])
			{
				mp[i] = 1;
				if (s[i - 1] == '0') ct++;
				i = p[i];
			}
			while (mp[i] != 2)
			{
				b[i] = ct;
				mp[i] = 2;
				i = p[i];
			}
		}

		for (int i = 1; i <= n; ++i)
		{
			cout << b[i] << " ";
		}
		cout << "\n";
	}
}


/*
5
1
1
0
5
1 2 4 5 3
10101
5
5 4 1 3 2
10011
6
3 5 6 1 2 4
010000
6
1 2 3 4 5 6
100110

*/

/*
1 
0 1 1 1 1 
2 2 2 2 2 
4 1 4 4 1 4 
0 1 1 0 0 1 

*/