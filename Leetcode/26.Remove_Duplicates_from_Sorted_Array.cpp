/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0, n = nums.size();

        for (int r = 1; r < n; ++r) {
            if (nums[l] != nums[r]) {
                l++;
                nums[l] = nums[r];
            }
        }

        return l + 1;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}