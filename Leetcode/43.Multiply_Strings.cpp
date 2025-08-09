/*
https://leetcode.com/problems/multiply-strings/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int m = num1.size(), n = num2.size();

        string res(m + n, '0');
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                int num = (num1[i] - '0') * (num2[j] - '0') + (res[i + j + 1] - '0');
                res[i + j + 1] = num % 10 + '0';
                res[i + j] += num / 10;
            }
        }

        int i = 0;
        while(i < res.size() && res[i] == '0') i++;

        return res.substr(i);
    }
};

void solve() {
    Solution obj;
    cout << obj.multiply("123", "456");
}

int main() {
    solve();
}