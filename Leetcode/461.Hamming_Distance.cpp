/*
https://leetcode.com/problems/hamming-distance/
*/

#include <bits/stdc++.h>

using namespace std;

int hammingDistance(int x, int y) {
    int _xor = x ^ y;

    // count set bits in _xor

    // Brian Kernighan’s Algorithm 
    int cnt = 0;
    while (_xor != 0) {
        _xor &= (_xor - 1);
        cnt++;
    }

    // c++ builtin function
    // return __builtin_popcount(_xor);

    return cnt;
}

void solve() {
    int a = 3, b = 1;
    cout << hammingDistance(a, b);
    cout << "\n";
}

int main() {
    solve();
}