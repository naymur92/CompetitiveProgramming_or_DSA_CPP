/*
https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), count, mid;

        int l = matrix[0][0], r = matrix[n - 1][n - 1];

        while (l < r) {
            mid = l + (r - l) / 2;
            count = 0;
            for (int i = 0; i < n; ++i) {
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }

            if (count >= k) r = mid;
            else l = mid + 1;
        }

        return l;
    }
};

int main() {
	Solution obj;
    // 
}