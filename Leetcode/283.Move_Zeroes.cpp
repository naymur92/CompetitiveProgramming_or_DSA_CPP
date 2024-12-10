/*
https://leetcode.com/problems/move-zeroes/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums) {
	int i = 0, j = 1;
	int n = nums.size();

	while (i < n and j < n) {
		while (i < n and nums[i] != 0) i++;
		j = i + 1;
		while (j < n and nums[j] == 0) j++;

		if (i < n and j < n) {
			swap(nums[i], nums[j]);
		}
	}
}

int main() {
	vector<int> nums = {0,1,0,3,12};

	moveZeroes(nums);

	for (int i = 0; i < nums.size(); ++i)
	{
		cout << nums[i] << ",";
	}
}