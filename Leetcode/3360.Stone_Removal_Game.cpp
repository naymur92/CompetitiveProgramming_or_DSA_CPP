/*
https://leetcode.com/contest/biweekly-contest-144/problems/stone-removal-game/
*/

#include <bits/stdc++.h>

using namespace std;

bool canAliceWin(int n) {
	int i = 10;
	while (i <= n)
	{
		n -= i;
		i--;
	}

	return (i % 2 == 1);
}

int main() {
	int n = 1;

	cout << (canAliceWin(n) ? "YES\n" : "NO\n");
}