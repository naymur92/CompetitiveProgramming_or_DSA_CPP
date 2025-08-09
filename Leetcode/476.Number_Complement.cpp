/*
https://leetcode.com/problems/number-complement/description/
*/

#include <bits/stdc++.h>

using namespace std;

/*// num = 5 (101)
cout << (num ^ (1 << 0)) << " ";    // 4 (100)
cout << (num ^ (1 << 1)) << " ";    // 7 (111)
cout << (num ^ (1 << 2)) << " ";    // 1 (001)
cout << (num ^ (1 << 3)) << " ";    // 13 (1101)*/

int findComplement(int num) {
    for (int i = log2(num); i >= 0; --i) {
        num ^= (1 << i);
    }

    return num;
}

void solve() {
    int num = 5;
    cout << findComplement(num);
}

int main() {
    solve();
}