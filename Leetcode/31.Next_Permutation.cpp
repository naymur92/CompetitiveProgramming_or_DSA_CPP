/*
https://leetcode.com/problems/next-permutation/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int l = n - 2;

        while (l >= 0 && nums[l] >= nums[l + 1]) l--;

        if (l < 0) {
            reverse(nums.begin(), nums.end());
            return;
        }

        int r = n - 1;
        while (nums[l] >= nums[r]) r--;
        swap(nums[l], nums[r]);
        reverse(nums.begin() + l + 1, nums.end());
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}