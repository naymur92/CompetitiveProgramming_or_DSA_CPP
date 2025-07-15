/*
https://leetcode.com/problems/add-binary/description/
*/

#include <bits/stdc++.h>

using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int i = a.length() - 1, j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0 ? a[i--] - '0' : 0);
        int bitB = (j >= 0 ? b[j--] - '0' : 0);

        int sum = bitA ^ bitB ^ carry;
        result += (sum + '0');

        carry = (bitA & bitB) | (bitA & carry) | (bitB & carry);
    }

    reverse(result.begin(), result.end());

    return result;
}

void solve() {
    string a = "1010", b = "1011";
    cout << addBinary(a, b);
    cout << "\n";
}

int main() {
    solve();
}