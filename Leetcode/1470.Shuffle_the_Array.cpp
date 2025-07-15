/*
https://leetcode.com/problems/shuffle-the-array/description/
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    // encode
    for (int i = 0; i < n; ++i) {
        nums[i] |= (nums[n + i] << 10);
    }

    // decode and place correction
    for (int i = n - 1; i >= 0; --i) {
        int encoded = nums[i];
        int xi = encoded & 1023;    // 1023 = 1<<10 - 1
        int yi = encoded >> 10;

        nums[2 * i] = xi;
        nums[2 * i + 1] = yi;
    }

    return nums;
}

void solve() {
    vector<int> nums = {1,2,3,4,4,3,2,1};
    int n = 4;
    vector<int> ans = shuffle(nums, n);

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    solve();
}