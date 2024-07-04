/*
https://codeforces.com/problemset/problem/1312/B
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];

		sort(v.begin(), v.end(), cmp);

		for (int i = 0; i < n; ++i) cout << v[i] << " ";
		cout << "\n";
	}
}


/*
3
1
7
4
1 1 3 5
6
3 2 1 5 6 4

*/

/*
7
1 5 1 3
2 4 6 1 3 5

*/