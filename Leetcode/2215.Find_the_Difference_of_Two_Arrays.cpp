/*
https://leetcode.com/problems/find-the-difference-of-two-arrays/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
	unordered_map<int, int> mp1, mp2;

	for (int i = 0; i < nums1.size(); ++i) {
		mp1[nums1[i]]++;
	}
	for (int i = 0; i < nums2.size(); ++i) {
		mp2[nums2[i]]++;
	}

	vector<vector<int>> result(2);
	for (auto &it: mp1) {
		if (mp2.find(it.first) == mp2.end()) result[0].push_back(it.first);
	}
	for (auto &it: mp2) {
		if (mp1.find(it.first) == mp1.end()) result[1].push_back(it.first);
	}

	return result;
}

int main() {
	vector<int> nums1 = {1,2,3,3}, nums2 = {1,1,2,2};

	auto result = findDifference(nums1, nums2);

	for (int i = 0; i < result.size(); ++i) {
		for (int j = 0; j < result[i].size(); ++j) {
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}
}