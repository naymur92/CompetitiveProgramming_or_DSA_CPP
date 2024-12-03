/*
https://codeforces.com/problemset/problem/1997/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--)
	{
		string s;
		cin >> s;

		int indx = 0;
		for (int i = 1; i < s.size(); ++i)
		{
			if (s[i] == s[i - 1]) {
				indx = i;
				break;
			}
		}

		char t = 'a';
		if (s[indx] == t) t = 'b';
		cout << s.substr(0, indx) << t << s.substr(indx, s.size() - indx) << "\n";
	}
}


/*
4
a
aaa
abb
password

*/

/*
wa
aada
abcb
pastsword

*/