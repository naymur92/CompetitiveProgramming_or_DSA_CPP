/*
https://leetcode.com/problems/binary-search/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid = 0;
        while (r - l > 1) {
            mid = l + (r - l) / 2;

            if (nums[mid] == target) return mid;

            if (nums[mid] > target) r = mid;
            else l = mid;
        }

        if (nums[l] == target) return l;
        else if (nums[r] == target) return r;
        else return -1;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}