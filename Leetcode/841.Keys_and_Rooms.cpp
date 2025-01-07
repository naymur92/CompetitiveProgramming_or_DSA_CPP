/*
https://leetcode.com/problems/keys-and-rooms/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void dfs(int room, vector<vector<int>>& rooms, vector<bool> &isVisited) {
        if (isVisited[room]) return;

        isVisited[room] = true;
        for (int key: rooms[room]) dfs(key, rooms, isVisited);
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> isVisited(n, false);

        dfs(0, rooms, isVisited);

        for (bool isVisit: isVisited) if (!isVisit) return false;
        return true;
    }
};

int main() {
	
}