/*
https://codeforces.com/problemset/problem/1593/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> coords(k);
		
		for (auto &c : coords) cin >> c;

		sort(coords.rbegin(), coords.rend());

		int m = 0, total_steps = 0, i = 0;
		while(total_steps < n && i < k) {
			total_steps += ( n - coords[i++]);
			if (total_steps >= n) break;

			m++;
		}
		cout << m << "\n";
	}
}


/*
3
10 6
8 7 5 4 9 4
2 8
1 1 1 1 1 1 1 1
12 11
1 2 3 4 5 6 7 8 9 10 11

*/

/*
3
1
4

*/