/*
https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int maxOperations(vector<int>& nums, int k) {
	sort(nums.begin(), nums.end());
	int cnt = 0;

	int l = 0, r = nums.size() - 1;

	while (l < r) {
		if (nums[l] + nums[r] == k) {
			cnt++;
			l++, r--;
		} else if (nums[l] + nums[r] < k) {
			l++;
		} else {
			r--;
		}
	}
	return cnt;
}

int main() {
	vector<int> nums = {3,4,1,2,1,3,4,3};
	int k = 5;

	cout << maxOperations(nums, k);
}