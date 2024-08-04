#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> numbers(n);

	for (auto &num: numbers) cin >> num;

	int search;
	cin >> search;

	int low = 0, high = n - 1;

	while (high - low > 1) {
		int mid = (low + high) / 2;

		if (numbers[mid] >= search) {
			high = mid;
		} else {
			low = mid + 1;
		}
	}

	if (numbers[low] == search) cout << low << "\n";
	else if (numbers[high] == search) cout << high << "\n";
	else cout << "Not Found!\n";
}

/*
6
2 3 4 5 6 7
5
*/