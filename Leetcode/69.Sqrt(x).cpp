/*
https://leetcode.com/problems/sqrtx/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) return 1;
        int l = 0, r = x;
        while (l < r - 1) {
            int mid = l + (r - l) / 2;

            if (mid * 1LL * mid > x) r = mid;
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