/*
https://leetcode.com/problems/number-of-provinces/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool> &isVisited, int n) {
        if (isVisited[node]) return;

        isVisited[node] = true;

        for (int i = 0; i < n; ++i) {
            if (isConnected[node][i] == 1) dfs(i, isConnected, isVisited, n);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> isVisited(n + 1, false);

        int connectedComponents = 0;
        for (int i = 0; i < n; ++i) {
            if (isVisited[i]) continue;

            dfs(i, isConnected, isVisited, n);
            connectedComponents++;
        }

        return connectedComponents;
    }
};

int main() {
	
}