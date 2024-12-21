/*
https://leetcode.com/problems/number-of-recent-calls/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

class RecentCounter {
public:
	queue<int> q;

    RecentCounter() {}
    
    int ping(int t) {
        q.push(t);

        while (q.front() < t - 3000) q.pop();

        return q.size();
    }
};

int main() {
	RecentCounter recentCounter;
	cout << recentCounter.ping(1) << "\n";
	cout << recentCounter.ping(100) << "\n";
	cout << recentCounter.ping(3001) << "\n";
	cout << recentCounter.ping(3002) << "\n";
}