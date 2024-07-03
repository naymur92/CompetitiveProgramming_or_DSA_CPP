/*
https://leetcode.com/problems/search-insert-position/
*/

#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
	return (lower_bound(nums.begin(), nums.end(), target) - nums.begin());
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		int target;
		cin >> target;

		cout << searchInsert(v, target) << endl;
	}
}

/*
3
4
1 3 5 6
5
4
1 3 5 6
2
4
1 3 5 6
7
*/

/*
2
1
4
*/