/*
https://leetcode.com/contest/biweekly-contest-144/problems/shift-distance-between-two-strings/
*/

#include <bits/stdc++.h>

using namespace std;

long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
	long long total_cost = 0, cost = 0;
	int n = s.size();

	vector<long long> prefSumNext(27, 0);
	vector<long long> prefSumPrev(27, 0);
	for (int i = 0; i < 26; ++i)
	{
		prefSumNext[i + 1] = 1LL * nextCost[i] + prefSumNext[i];
		prefSumPrev[i + 1] = 1LL * previousCost[i] + prefSumPrev[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cost = 0;
		int start = s[i] - 'a', end = t[i] - 'a';
		if (start < end) {
			// backward
			cost = prefSumPrev[start + 1] + prefSumPrev[26] - prefSumPrev[end + 1];
			// forward
			cost = min(cost, (prefSumNext[end] - prefSumNext[start]));
		}
		else if (start > end) {
			// forward
			cost = prefSumNext[26] - prefSumNext[start] + prefSumNext[end];
			// backward
			cost = min(cost, (prefSumPrev[start + 1] - prefSumPrev[end + 1]));
		}

		total_cost += cost;
	}

	return total_cost;
}

int main() {
	string s = "ccdbbcaadb", t = "aadbbdaaac";

	vector<int> nextCost = {6,6,9,8,2,4,10,10,6,4,9,5,5,5,2,7,9,7,4,1,4,10,1,5,2,4};
	vector<int> previousCost = {0,4,5,6,7,10,5,5,8,1,1,10,7,8,10,8,7,2,3,3,6,3,0,6,4,0};

	cout << shiftDistance(s, t, nextCost, previousCost);
}


/*
"ccdbbcaadb"
"aadbbdaaac"
[6,6,9,8,2,4,10,10,6,4,9,5,5,5,2,7,9,7,4,1,4,10,1,5,2,4]
[0,4,5,6,7,10,5,5,8,1,1,10,7,8,10,8,7,2,3,3,6,3,0,6,4,0]

48


"zfsmfmmff"
"mffzzsmmm"
[10,10,2,6,4,7,1,7,3,7,5,5,4,3,7,9,7,6,0,7,7,6,10,2,0,8]
[3,0,9,6,4,9,7,6,2,10,2,3,9,9,10,2,1,9,0,3,2,2,6,2,6,8]

335
*/