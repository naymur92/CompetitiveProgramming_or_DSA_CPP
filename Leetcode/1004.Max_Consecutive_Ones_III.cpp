/*
https://leetcode.com/problems/max-consecutive-ones-iii/solutions/3540704/solution/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int longestOnes(vector<int>& nums, int k) {
	int max_w = 0, cn_0 = 0, n = nums.size(), l = 0;

	for (int r = 0; r < n; ++r) {
		if (nums[r] == 0) {
			cn_0++;
		}

		while (cn_0 > k) {
			if (nums[l] == 0) {
				cn_0--;
			}
			l++;
		}

		max_w = max(max_w, (r - l + 1));
	}

	return max_w;
}

int main() {
	vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
	int k = 3;

	cout << longestOnes(nums, k);
}