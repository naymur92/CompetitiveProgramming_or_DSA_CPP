/*
https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size() - 1, mid = 0;
        while (l < r) {
            mid = l + (r - l) / 2;
            if (arr[mid] > arr[mid + 1]) r = mid;
            else if (arr[mid] < arr[mid + 1]) l = mid + 1;
        }
        return l;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}