/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, n = prices.size();
        for (int l = 0; l < n; ++l) {
            int r = l + 1;
            while (r < n && prices[r - 1] <= prices[r]) r++;

            profit += prices[r - 1] - prices[l];

            l = r - 1;
        }
        return profit;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}