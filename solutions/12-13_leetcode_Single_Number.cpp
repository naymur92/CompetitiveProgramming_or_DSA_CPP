#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int numbers[n];

		unordered_map<int, int> array_val_count;

		for(int i = 0; i < n; i++) {
			int num;
			cin >> num;
			numbers[i] = num;
			array_val_count[num]++;
		}

		for (int i = 0; i < n; ++i)
		{
			if(array_val_count[numbers[i]] == 1) {
				cout << numbers[i] << endl;
				break;
			}
		}
	}
}