/*
https://codeforces.com/problemset/problem/732/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	vector<int> walks(n);

	for (auto &a: walks) cin >> a;

	int min_walks = 0;
		
	for (int i = 1; i < n; ++i) {
		int w = walks[i - 1] + walks[i];
		if (w < k) {
			min_walks += k - w;
			walks[i] += k - w;
		}
	}

	cout << min_walks << "\n";
	for (auto &w: walks) cout << w << " ";
	cout << "\n";
}


/*
3 5
2 0 1


3 1
0 0 0


4 6
2 4 3 5

*/

/*
4
2 3 2


1
0 1 0


0
2 4 3 5

*/