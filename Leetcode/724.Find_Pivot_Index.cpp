/*
https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int>& nums) {
	int n = nums.size();
	vector<int> pref_sum(n + 1, 0);

	for (int i = 0; i < n; ++i) {
		pref_sum[i + 1] = pref_sum[i] + nums[i];
	}

	int piv_indx = -1;
	for (int i = 0; i < n; ++i) {
		if (pref_sum[i] == pref_sum[n] - pref_sum[i + 1]) {
			piv_indx = i;
			break;
		}
	}
	return piv_indx;
}

int main() {
	vector<int> nums = {1,7,3,6,5,6};

	cout << pivotIndex(nums);
}