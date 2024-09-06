/*
https://codeforces.com/problemset/problem/2004/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int l, r, L, R;
		cin >> l >> r >> L >> R;

		vector<int> rooms(101);

		for (int i = l; i <= r; ++i) {
			rooms[i]++;
		}
		for (int i = L; i <= R; ++i) {
			rooms[i]++;
		}

		int left = min(l, L);
		int right = max(r, R);
		int count = 0;
		for (int i = left; i <= right; ++i) {
			// cout << rooms[i] << " ";
			if (rooms[i] == 2) count++;
		}
		if (rooms[left] == 1 && rooms[right]  == 1) count++;
		if (rooms[left] == 2 && rooms[right]  == 2) count--;
		cout << count << "\n";
	}
}


/*
4
1 2
3 4
2 5
2 5
3 7
6 7
4 5
2 8

*/

/*
1
3
2
3

*/