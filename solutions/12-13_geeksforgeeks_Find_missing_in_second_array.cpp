/*
Given two arrays A and B contains integers of size N and M,
the task is to find numbers which are present in the first array,
but not present in the second array.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(M).

 
Constraints:
1 ≤ N, M ≤ 10^6
-106 ≤ A[i], B[i] ≤ 10^6
*/

#include <bits/stdc++.h>
using namespace std;

const int found_size = 1e7 + 10;
long long found_array[found_size];

int main() {
	int m, n;
	cin >> n >> m;

	long long A[n];
	long long B[m];

	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> B[i];
		int found_indx;
		if(B[i] < 0) {
			found_indx = abs(B[i]);
		} else {
			found_indx = 2 * B[i];
		}
		found_array[found_indx] = found_array[found_indx] + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		int found_indx;
		if(A[i] >= 0) {
			found_indx = A[i] * 2;
		} else {
			found_indx = abs(A[i]);
		}
		if(found_array[found_indx] == 0) {
			cout << A[i] << " ";
		}
	}
}