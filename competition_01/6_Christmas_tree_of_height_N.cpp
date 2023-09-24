#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;

	cin >> t;

	while(t--) {
		cin >> n;

		long long numbers[n][n];

		numbers[0][0] = 1;

		cout << 1 << endl;
		// numbers[1][1] = 1;

		for(int i = 1; i < n; ++i) {
			numbers[i][0] = 1;
			numbers[i][i] = 1;
			cout << 1 << ' ';
			for(int j = 1; j < i; ++j) {
				long long key = numbers[i - 1][j - 1] + numbers[i - 1][j];
				numbers[i][j] = key;
				cout << key << ' ';
			}
			cout << 1 << endl;
		}
	}
}