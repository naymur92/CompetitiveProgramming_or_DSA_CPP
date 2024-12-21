/*
https://leetcode.com/contest/biweekly-contest-146/problems/count-subarrays-of-length-three-with-a-condition/description/
*/

#include <bits/stdc++.h>

using namespace std;

int countSubarrays(vector<int>& nums) {
	int n = nums.size();

	int ans = 0;
	for (int i = 2; i < n; ++i) {
		if (nums[i - 1] == 2 * (nums[i - 2] + nums[i])) ans++;
	}
	return ans;
}

int main() {
	vector<int> nums = {-1,-4,-1,4};

	cout << countSubarrays(nums);
}