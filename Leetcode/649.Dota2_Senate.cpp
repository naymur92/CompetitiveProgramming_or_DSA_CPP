/*
https://leetcode.com/problems/dota2-senate/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

string predictPartyVictory(string senate) {
	queue<int> rad, dire;
	int n = senate.size();

	for (int i = 0; i < n; ++i) {
		if (senate[i] == 'R') rad.push(i);
		else dire.push(i);
	}

	while (!rad.empty() and !dire.empty()) {
		if (rad.front() < dire.front()) {
			rad.push(n++);
		} else {			
			dire.push(n++);
		}
		rad.pop();
		dire.pop();
	}
	// cout << rad.size() << " => " << dire.size() << "\n";
	return (rad.size() > dire.size() ? "Radiant" : "Dire");
}

int main() {
	string senate = "RDD";

	cout << predictPartyVictory(senate);
}