/*
https://codeforces.com/problemset/problem/1849/B
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, k;
		cin >> n >> k;
		vector<pair<int, int>> a;

		for (int i = 0; i < n; ++i) {
			int num;
			cin >> num;
			num %= k;
			if (num == 0) num = k;
			a.push_back({i, num});
		}

		sort(a.begin(), a.end(), cmp);

		for (auto &it: a) cout << it.first + 1 << " ";
		cout << "\n";
	}
}


/*
3
3 2
1 2 3
2 3
1 1
4 3
2 8 3 5

*/

/*
2 1 3 
1 2 
3 1 2 4 

*/