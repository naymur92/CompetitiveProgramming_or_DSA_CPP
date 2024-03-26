/*
Given array a of N integers. Given Q queries
and in each query given a number X.
print count of that number in array

Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int count_hs[N];

int main(){	
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		count_hs[a[i]]++;
	}

	int Q;
	cin >> Q;
	while(Q--)
	{
		int X;
		cin >> X;
		
		cout << count_hs[X] << endl;
	}

	// O(N) + O(Q) = O(N) + O(N) = 2 * O(N) = O(N)
}