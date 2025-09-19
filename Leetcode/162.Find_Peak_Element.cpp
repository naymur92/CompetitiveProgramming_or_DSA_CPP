/*
https://leetcode.com/problems/find-peak-element/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1, mid;

        while (l < r) {
            mid = (l + r) / 2;

            if (nums[mid] > nums[mid + 1]) r = mid;
            else l = mid + 1;
        }

        return l;
    }
};

int main() {
	Solution obj;
    // 
}