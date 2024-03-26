#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int A[N];

int main() {
	int n;
	long long k;
	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}

	sort(A, A + n);
	
	int i = 0, j = n - 1;

	bool found = false;

	while(i < j) {
		if(A[i] + A[j] == k) {
			found = true;
			break;
		}

		if(A[i] + A[j] < k) {
			i++;
		}
		if (A[i] + A[j] > k)
		{
			j--;
		}
	}

	if(found) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}