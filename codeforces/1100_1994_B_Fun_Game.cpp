/*
https://codeforces.com/problemset/problem/1994/B
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

		string s1, s2;
		cin >> s1 >> s2;

		bool is_possible = true;
		for (int i = 0; i < n; ++i)
		{
			if (s1[i] == '0' && s2[i] == '1') {
				is_possible = false;
				break;
			}
			if (s1[i] == '1') {
				break;
			}
		}

		cout << (is_possible ? "YES\n" : "NO\n");
	}
}


/*
6
1
0
1
7
0110100
0110100
9
100101010
101111110
4
0011
1011
4
0100
0001
8
10110111
01100000

*/

/*
NO
YES
YES
NO
YES
YES

*/