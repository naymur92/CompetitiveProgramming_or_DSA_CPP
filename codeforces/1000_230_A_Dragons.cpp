/*
https://codeforces.com/problemset/problem/230/A
*/

#include <bits/stdc++.h>

using namespace std;

bool custom_comparator(pair<int, int> a, pair<int, int> b) {
	if(a.first != b.first) {
		return a.first < b.first;
	} else {
		return a.second > b.second;
	}
}

int main(){
	int s, n;
	cin >> s >> n;

	vector<pair<int, int>> numbers;

	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;

		numbers.push_back({x, y});
	}
	sort(numbers.begin(), numbers.end(), custom_comparator);

	bool is_die = false;

	for (int i = 0; i < n; ++i)
	{
		if(s > numbers[i].first) {
			s += numbers[i].second;
		} else {
			is_die = true;
			break;
		}
	}
	cout << (is_die ? "NO" : "YES") << endl;
}


/*
2 2
1 99
100 0

10 1
100 100

*/

/*
YES

NO
*/