/*
https://codeforces.com/problemset/problem/1419/D1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	sort(a.begin(), a.end());

	vector<int> result(n);

	int mid = n / 2;
	int cheapCount = 0;
	for (int i = mid, j = 0; i < n; ++i, j += 2)
		result[j] = a[i];

	for (int i = 0, j = 1; i < mid; ++i, j += 2) {
		result[j] = a[i];

		if (j < n - 1 && result[j] < result[j - 1] && result[j] < result[j + 1])
			cheapCount++;
	}

	cout << cheapCount << "\n";

	for (int i = 0; i < n; ++i)
		cout << result[i] << " ";
	cout << "\n";
}


/*
5
1 2 3 4 5

1
1000000000

2
1000000000 1


*/

/*
2
3 1 4 2 5 

0
1000000000 


0
1000000000 1 

*/