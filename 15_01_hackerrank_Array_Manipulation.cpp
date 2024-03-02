#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
long long int arr[N];

int main(){	
	int n, m;
	cin >> n >> m;

	while(m--)
	{
		int a, b, k;
		cin >> a >> b >> k;

		arr[a] += k;
		arr[b + 1] -= k;
	}

	for (int i = 2; i <= n; ++i)
	{
		arr[i] += arr[i - 1];
	}

	long long maximum = -1;
	for (int i = 1; i <= n; ++i)
	{
		if(arr[i] > maximum) {
			maximum = arr[i];
		}
	}

	cout << maximum << endl;

	// O(m + n + n) = 2*10^5 + 10^7 + 10^7 = 10^7
}