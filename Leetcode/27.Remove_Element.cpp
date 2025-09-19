/*
https://leetcode.com/problems/remove-element/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /*int n = nums.size();

        int k = 0;
        for (int i = 0, j = 1; i < n; ++i) {
            if (nums[i] != val) {
                k++;
                continue;
            }

            if (j <= i) j = i + 1;

            while (j < n && nums[j] == val) j++;
            if (j < n ) {
                swap(nums[i], nums[j]);
                k++;
            }
        }

        return k;*/

        int k = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}