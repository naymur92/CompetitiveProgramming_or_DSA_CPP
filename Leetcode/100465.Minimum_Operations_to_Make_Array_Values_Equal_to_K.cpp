/*
https://leetcode.com/contest/biweekly-contest-145/problems/minimum-operations-to-make-array-values-equal-to-k/
*/

#include <bits/stdc++.h>

using namespace std;

int minOperations(vector<int>& nums, int k) {
	sort(nums.begin(), nums.end());

	if (nums[0] < k) return -1;
	else {
		int ops = 0;
		for (int i = nums.size() - 1; i >= 0; --i)
		{
			int cur = nums[i];
			if (cur == k) break;

			while (i >= 0 and cur == nums[i]) i--;
			i++;
			ops++;
		}
		return ops;
	}
}

int main() {
	vector<int> nums = {5,2,5,4,5};
	int k = 2;

	cout << minOperations(nums, k) << "\n";
}


/*
9,7,5,3
4
*/