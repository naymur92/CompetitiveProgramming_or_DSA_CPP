#include <bits/stdc++.h>
using namespace std;


int main() {
	unordered_map<int, long long> sums;
	int n;
	cin >> n;
	long long numbers[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> numbers[i];
		sums[numbers[i]]++;
		
	}

	bool doubles = false;

	for(long long num : numbers)
	{
		if(sums[num] > 0) {
			doubles = true;
		}
	}
	if(doubles) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}