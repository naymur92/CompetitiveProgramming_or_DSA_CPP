/*
https://leetcode.com/problems/find-the-highest-altitude/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int largestAltitude(vector<int>& gain) {
	int highest = 0, pref_sum = 0;
	for (auto &h: gain) {
		pref_sum += h;
		highest = max(highest, pref_sum);
	}

	return highest;
}

int main() {
	vector<int> gain = {-4,-3,-2,-1,4,3,2};

	cout << largestAltitude(gain);
}


/*
2 3 5 1 3
3

*/

/*
true true true false true
*/