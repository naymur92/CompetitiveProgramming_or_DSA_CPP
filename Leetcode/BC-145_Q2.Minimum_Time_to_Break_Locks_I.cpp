/*
https://leetcode.com/contest/biweekly-contest-145/problems/minimum-time-to-break-locks-i/
*/

#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &strength, vector<int> &order, int K) {
	int time = 0, x = 1;

	for (int lock_indx: order)
	{
		int energy_req = strength[lock_indx];
		time += (energy_req + x - 1) / x;	// ceil(energy_req/x)
		x += K;
	}

	return time;
}

int findMinimumTime(vector<int>& strength, int K) {
	int n = strength.size();

	vector<int> temp_order(n);
	for (int i = 0; i < n; ++i)
	{
		temp_order[i] = i;
	}

	int min_time = INT_MAX;

	do
	{
		int cur_time = solve(strength, temp_order, K);
		min_time = min(min_time, cur_time);
	} while (next_permutation(temp_order.begin(), temp_order.end()));

	return min_time;
}

int main() {
	vector<int> strength = {7,3,6,18,22,50};
	int K = 4;

	cout << findMinimumTime(strength, K) << "\n";
}


/*
3,4,1
1

4


2,5,4
2

5
*/