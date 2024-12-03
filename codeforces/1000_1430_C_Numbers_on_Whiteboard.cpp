/*
https://codeforces.com/problemset/problem/1430/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<pair<int, int>> pairs;
		int cur = n;

		while (n-- > 1) {
			pairs.push_back({cur, n});
			cur = ceil((cur + n) / 2.0);
		}
		cout << cur << "\n";
		for (auto &it: pairs) cout << it.first << " " << it.second << "\n";
	}
}


/*
1
4

*/

/*
2
2 4
3 3
3 1

*/