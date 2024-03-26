/*
Given test cases T and in each test case
a number N. Print its factorial for each test case
% module M where M = 10^9 + 7

Constraints:
1 <= N <= 10^5
1 <= T <= 10^5
*/

#include <bits/stdc++.h>

using namespace std;

const int M = 1e9 + 7;

int main(){
	int t;

	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		long long fact = 1;
		for(int i = 2; i <= n; ++i) {
			fact = (fact * n) % M;
		}

		cout << fact << endl;
	}
	
	// O(T*N) = O(N*N) = O(N^2)
}