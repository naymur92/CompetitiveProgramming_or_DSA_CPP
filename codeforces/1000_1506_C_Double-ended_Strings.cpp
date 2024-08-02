/*
https://codeforces.com/problemset/problem/1506/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		string a, b;
		cin >> a >> b;

		int a_size = a.size();
		int b_size = b.size();

		int max_len = 0;

		for (int l = 1; l <= min(a_size, b_size); ++l) {
			for (int i = 0; i + l <= a_size; ++i) {
				for (int j = 0; j + l <= b_size; ++j) {
					if (a.substr(i, l) == b.substr(j, l)) max_len = max(max_len, l);
				}
			}
		}

		int ans = a_size + b_size - 2 * max_len;
		cout << ans << "\n";
	}
}


/*
5
a
a
abcd
bc
hello
codeforces
hello
helo
dhjakjsnasjhfksafasd
adjsnasjhfksvdafdser

*/

/*
0
2
13
3
20

*/