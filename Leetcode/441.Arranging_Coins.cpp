/*
https://leetcode.com/problems/arranging-coins/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1, r = sqrt(n) * 2;
        while (r - l > 1) {
            int mid = l + (r - l) / 2;
            if (((long) mid * mid + mid) / 2 > n) r = mid;
            else l = mid;
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