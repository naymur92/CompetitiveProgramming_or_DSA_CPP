/*
https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void dfs(vector<vector<pair<int, int>>> &adjList, vector<bool> &isVisited, int &changedConnections, int currNode) {
        isVisited[currNode] = true;

        for (auto &adjNode: adjList[currNode]) {
            if (isVisited[adjNode.first]) continue;
            
            if (adjNode.second == 1) changedConnections++;
            dfs(adjList, isVisited, changedConnections, adjNode.first);
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> adjList(n);
        vector<bool> isVisited(n, false);

        for (auto &connection: connections) {
            adjList[connection[0]].push_back({connection[1], 1});
            adjList[connection[1]].push_back({connection[0], -1});
        }

        int changedConnections = 0;
        dfs(adjList, isVisited, changedConnections, 0);

        return changedConnections;
    }
};

int main() {
	
}