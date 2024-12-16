/*
https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
	unordered_map<int, int> mp;
	int n = arr.size();

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; ++i) {
		int j = i;
		while (j < n and arr[i] == arr[j]) j++;

		mp[j - i]++;

		i = j - 1;
	}

	for (auto &item: mp) {
		if (item.second > 1) return false;
	}

	return true;
}

int main() {
	vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};

	cout << boolalpha << uniqueOccurrences(arr) << "\n";
}