/*
https://leetcode.com/problems/subsets/
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> all_subsets;

void generate(vector<int> &subset, int i, vector<int> &nums) {
	if (i == nums.size()) {
		all_subsets.push_back(subset);
		return;
	}

	generate(subset, i + 1, nums);

	subset.push_back(nums[i]);
	generate(subset, i + 1, nums);

	subset.pop_back();
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> nums(n);

		for (auto &num: nums) cin >> num;
		
		vector<int> empty;
    	generate(empty, 0, nums);

    	for (auto &subset: all_subsets) {
    		for (auto &num: subset) cout << num << " ";
    		cout << "\n";
    	}
    	cout << "\n";
	}
}

/*
2
3
1 2 3
1
0

*/

/*
[[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

[[],[0]]
*/