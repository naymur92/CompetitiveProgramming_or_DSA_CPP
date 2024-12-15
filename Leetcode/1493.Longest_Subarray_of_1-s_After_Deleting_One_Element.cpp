/*
https://leetcode.com/problems/max-consecutive-ones-iii/solutions/3540704/solution/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int longestSubarray(vector<int>& nums) {
	int n = nums.size(), l = 0, k = 1, w = 0;

	for (int r = 0; r < n; ++r) {
		if (nums[r] == 0) {
			k--;
		}

		while (k < 0) {
			if (nums[l] == 0) {
				k++;
			}
			l++;
		}

		w = max(w, r - l);
	}

	return w;
}

int main() {
	vector<int> nums = {0,1,1,1,0,1,1,0,1};

	cout << longestSubarray(nums);
}