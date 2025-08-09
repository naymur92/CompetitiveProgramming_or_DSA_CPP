/*
https://leetcode.com/problems/powx-n/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;

        unsigned int b = abs(1L * n);
        while(b) {
            if (b&1) {
                ans *= x;
            }
            x *= x;
            b >>= 1;
        }

        if (n < 0) return 1 / ans;
        return ans;
    }
};

void solve() {
    Solution obj;
    cout << obj.myPow(1.0000, 2147483647);
}

int main() {
    solve();
}