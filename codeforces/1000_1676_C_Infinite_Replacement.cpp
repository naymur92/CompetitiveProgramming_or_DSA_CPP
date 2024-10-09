/*
https://codeforces.com/problemset/problem/1676/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int q;
	cin >> q;

	while (q--) {
		string s, t;
		cin >> s >> t;

		int count_a_s = s.size(), count_a_t = 0;

		for (int i = 0; i < t.size(); ++i) {
			if (t[i] == 'a')
				count_a_t++;
		}

		if (t == "a")
			cout << 1 << "\n";
		else if (count_a_t > 0)
			cout << -1 << "\n";
		else
			cout << (1ULL << count_a_s) << "\n";
	}

}


/*
3
aaaa
a
aa
abc
a
b

*/

/*
1
-1
2

*/