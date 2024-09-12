#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10; i >= 0; --i) {
		cout << ((num >> i) & 1);
	}
	cout << "\n";
}

vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    int subsets_ct = 1 << n;
    vector<vector<int>> all_subsets;
    for (int mask = 0; mask < subsets_ct; ++mask)
    {
    	vector<int> subset;
    	for (int i = 0; i < n; ++i) {
    		if ((mask & (1 << i)) != 0) {
    			subset.push_back(nums[i]);
    		}
    	}
    	all_subsets.push_back(subset);
    }
    return all_subsets;
}

int main() {
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	auto all_subsets = subsets(v);

	for (auto subset: all_subsets) {
		for (int elem: subset) {
			cout << elem << " ";
		}
		cout << "\n";
	}
}

/*
3
2 4 5
*/

/*

2 
4 
2 4 
5 
2 5 
4 5 
2 4 5 
*/