/*
https://codeforces.com/problemset/problem/1744/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		char c;
		string s;
		cin >> n >> c >> s;

		s += s;
		int maximum = 0, count = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == c) {
				count = 0;
				while (s[i] != 'g' && i < s.size()) {
					count++;
					i++;
				}
				maximum = max(maximum, count);
			}
		}

		cout << maximum << "\n";
	}
}


/*
6
5 r
rggry
1 g
g
3 r
rrg
5 y
yrrgy
7 r
rgrgyrg
9 y
rrrgyyygy

*/

/*
3
0
2
4
1
4

*/