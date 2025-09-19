/*
https://leetcode.com/problems/valid-perfect-square/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, r = num, mid = 0;
        while (r - l > 1) {
            mid = l + (r - l) / 2;
            long sq = mid * 1L * mid;
            if (sq > num) r = mid;
            else l = mid;
        }

        return l * l == num;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}