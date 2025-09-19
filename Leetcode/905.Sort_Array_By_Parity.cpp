/*
https://leetcode.com/problems/sort-array-by-parity/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        /*int n = nums.size();
        vector<int> ans(n);

        int indx = 0;
        for (int i = 0; i < n; ++i) if (nums[i] % 2 == 0) ans[indx++] = nums[i];
        for (int i = 0; i < n; ++i) if (nums[i] % 2) ans[indx++] = nums[i];

        return ans;*/

        int left = 0, n = nums.size();
        for (int right = 0; right < n; ++right) {
            if (nums[right] % 2 == 0) swap(nums[left++], nums[right]);
        }
        return nums;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}