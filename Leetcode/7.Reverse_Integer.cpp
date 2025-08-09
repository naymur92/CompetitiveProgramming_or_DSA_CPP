/*
https://leetcode.com/problems/reverse-integer/description/
*/

#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
    long ans = 0;
    int sign = x < 0 ? -1 : 1;

    long tmp = abs(x * 1L);
    while (tmp) {
        ans = ans * 10 + tmp % 10;
        tmp /= 10;
        if (ans * sign < INT_MIN || ans > INT_MAX) return 0;
    }

    return ans * sign;
}

void solve() {
    cout << reverse(123);
}

int main() {
    solve();
}