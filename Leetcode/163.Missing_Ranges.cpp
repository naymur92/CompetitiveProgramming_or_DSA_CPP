/*
https://leetcode.com/problems/missing-ranges/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int> &nums, int lower, int upper) {
        vector<vector<int>> ranges;

        /*int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] == lower) {
                lower++;
            } else {
                ranges.push_back({lower, nums[i] - 1});
                lower = nums[i] + 1;

                // cout << ranges.back()[0] << " " << ranges.back()[1] << "\n";
            }
        }

        if (nums[n - 1] != upper) {
            ranges.push_back({lower, upper});
        }*/

        // another approach
        nums.insert(nums.begin(), lower - 1);
        nums.push_back(upper + 1);
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i + 1] - nums[i] > 1) {
                ranges.push_back({nums[i] + 1, nums[i + 1] - 1});
            }
        }

        return ranges;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0, upper = 99;
    auto ans = obj.findMissingRanges(nums, lower, upper);

    for (auto range: ans) {
        cout << range[0] << " " << range[1] << "\n";

        // for (int num: range) cout << num << " ";
        // cout << "\n";
    }
}