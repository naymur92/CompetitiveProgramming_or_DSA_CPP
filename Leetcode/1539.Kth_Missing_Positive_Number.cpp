/*
https://leetcode.com/problems/kth-missing-positive-number/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0, r = arr.size() - 1, mid = 0;

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (arr[mid] - 1 - mid < k) l = mid + 1;
            else r = mid - 1;
        }

        return l + k;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}