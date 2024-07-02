/*
https://leetcode.com/problems/search-in-rotated-sorted-array/
*/

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
	int low = 0, high = nums.size() - 1;

	while (low <= high) {
		int mid = (low + high) / 2;

		if (nums[mid] == target) {
			return mid;
		}

		if (nums[low] <= nums[mid]) {
			if (nums[low] <= target && nums[mid] >= target) {
				high = mid;
			} else {
				low = mid + 1;
			}
		} else {
			if (nums[mid] <= target && nums[high] >= target) {
				low = mid;
			} else {
				high = mid - 1;
			}
		}
	}

	return -1;
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

		cout << search(v, target) << endl;
	}
}

/*
4
7
4 5 6 7 0 1 2
0
7
4 5 6 7 0 1 2
3
1
1
0
3
5 1 3
5
*/

/*
4
-1
-1
0
*/