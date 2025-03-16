/*
https://leetcode.com/problems/evaluate-division/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void dfs(double &ans, double temp, unordered_set<string> &isVisited, unordered_map<string, vector<pair<string, double>>> &adjList, string currNode, string dest) {
        if (adjList.find(currNode) == adjList.end()) {
            return;
        }

        if (currNode == dest) {
            ans = temp;
            return;
        };

        isVisited.insert(currNode);

        for (auto &adjNode: adjList[currNode]) {
            if (isVisited.find(adjNode.first) != isVisited.end()) continue;
            
            dfs(ans, temp = adjNode.second, isVisited, adjList, adjNode.first, dest);
        }
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int n = equations.size();

        unordered_map<string, vector<pair<string, double>>> adjList;

        for (int i = 0; i < n; ++i) {
            // pair<string, double> curr = {equations[i][1], values[i]};

            adjList[equations[i][0]].push_back({equations[i][1], values[i]});
            adjList[equations[i][1]].push_back({equations[i][0], 1 / values[i]});
        }

        vector<double> output;

        for (int i = 0; i < queries.size(); ++i) {
            double ans = -1, temp = 1;
            unordered_set<string> isVisited;
            dfs(ans, temp, isVisited, adjList, queries[i][0], queries[i][1]);
            
            output.push_back(ans);
        }

        return output;
    }
};

int main() {
	
}