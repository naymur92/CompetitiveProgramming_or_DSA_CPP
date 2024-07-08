/*
https://codeforces.com/problemset/problem/1358/B
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

		vector<int> grs(n);
		for (auto &gr: grs) cin >> gr;

		sort(grs.begin(), grs.end());

		// for (auto &gr: grs) cout << gr << " ";
		// cout << "\n";

		bool found = false;

		for (int i = n - 1; i >= 0; i--) {
			if (grs[i] <= i + 1) {
				cout << i + 2 << "\n";
				found = true;
				break;
			}
		}

		if (!found) cout << 1 << "\n";
	}
}


/*
4
5
1 1 2 2 1
6
2 3 4 5 6 7
6
1 5 4 5 1 9
5
1 2 3 5 6

*/

/*
6
1
6
4

*/