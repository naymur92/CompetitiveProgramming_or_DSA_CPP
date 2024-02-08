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

int main(){
	int N;
	cin >> N;
	int a[N];

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	int Q;
	cin >> Q;
	while(Q--)
	{
		int X;
		cin >> X;
		int count = 0;

		for (int i = 0; i < N; ++i)
		{
			if(a[i] == X) {
				count++;
			}
		}
		cout << count << endl;
	}

	// O(N) + O(Q*N) = O(N) + O(N^2) = O(N^2)
}