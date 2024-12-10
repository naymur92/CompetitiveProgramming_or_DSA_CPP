/*
https://leetcode.com/problems/subsets/
*/

#include <bits/stdc++.h>
using namespace std;
/*
1337 = 7*191
ETF of 1337 = 1337 * (6/7) * (190/191) = 1140
*/

int binExp(int a, int b) {
	a %= 1337;
	int ans = 1;
	while (b) {
		if (b&1) {
			ans = (ans * 1LL * a) % 1337;
		}
		a = (a * 1LL * a) % 1337;
		b >>= 1;
	}
	return ans;
}

int superPow(int a, vector<int>& b) {
	int B = 0;

	for (int i = 0; i < b.size(); ++i) {
		if ((B * 10 + b[i]) > 1140)
			B = (B * 10 + b[i]) % 1140;
		else
			B = (B * 10 + b[i]);
	}

	return binExp(a, B);
}

int main() {
	int a = 7;
	vector<int> b = {1,1,4,0};

	cout << superPow(a, b);
}