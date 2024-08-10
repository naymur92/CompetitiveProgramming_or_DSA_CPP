/*
https://codeforces.com/problemset/problem/474/B
*/

#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &a, int q) {
	int low = 0, high = a.size(), mid;
	
	while (high - low > 1) {
		mid = (high + low) / 2;

		if (a[mid] < q) {
			low = mid + 1;
		} else {
			high = mid;
		}
	}

	if (a[low] >= q) return low;
	else return high;
}

int main(){	
	int n;
	cin >> n;
	
	vector<int> a(n + 1);

	for (int i = 0; i < n; ++i) {
		int w;
		cin >> w;
		a[i + 1] = a[i] + w;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int q;
		cin >> q;
		cout << search(a, q) << "\n";
	}
}


/*
5
2 7 3 4 9
3
1 25 11


*/

/*
1
5
3

*/