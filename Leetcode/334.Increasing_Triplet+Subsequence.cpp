/*
https://leetcode.com/problems/increasing-triplet-subsequence/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

bool increasingTriplet(vector<int>& nums) {
	int sm1 = INT_MAX;
	int sm2 = INT_MAX;

	for (auto &num: nums) {
		if (num <= sm1) sm1 = num;
		else if (num <= sm2) sm2 = num;
		else return true;
	}
	return false;
}

int main() {
	vector<int> nums = {5,4,3,2,1};

	cout << increasingTriplet(nums);
}