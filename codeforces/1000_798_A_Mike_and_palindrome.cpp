/*
https://codeforces.com/problemset/problem/798/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	int missmatch_count = 0;
	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - i - 1])
			missmatch_count++;
	}

	cout << (missmatch_count > 1 || (missmatch_count == 0 && s.size() % 2 == 0) ? "NO\n" : "YES\n");
}


/*
abccaa


abbcca


abcda


*/

/*
YES


NO


YES


*/