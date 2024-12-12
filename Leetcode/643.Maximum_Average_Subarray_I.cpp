/*
https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
	int sum = 0, max_sum = 0;

	for (int i = 0; i < k; ++i) {
		sum += nums[i];
	}
	max_sum = sum;

	for (int i = k; i < nums.size(); ++i) {
		sum = sum - nums[i - k] + nums[i];

		max_sum = max(sum, max_sum);
	}

	return (max_sum / (k * 1.0));
}

int main() {
	vector<int> nums = {1,12,-5,-6,50,3};
	int k = 4;

	cout << findMaxAverage(nums, k);
}