/*
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
	vector<int> res(2);
	res[0] = res[1] = -1;

	int firstIndex = lower_bound(nums.begin(), nums.end(), target) - nums.begin();	
	
	if (firstIndex < nums.size() && nums[firstIndex] == target) {
		int lastIndex = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin() - 1;
		
		res[0] = firstIndex;
		res[1] = lastIndex;
	}

	return res;
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

		vector<int> res = searchRange(v, target);
		cout << res[0] << " " << res[1] << "\n";
	}
}

/*
3
6
5 7 7 8 8 10
8
6
5 7 7 8 8 10
6
0

0
*/

/*
3, 4
-1 -1
-1 -1
*/