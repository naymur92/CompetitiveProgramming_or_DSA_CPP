/*
https://codeforces.com/problemset/problem/1613/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int pairs = n / 2;

		vector<int> numbers(n);

		for (auto &num: numbers)
			cin >> num;

		sort(numbers.begin(), numbers.end());

		int min_num = numbers[0];

		for (int i = 0; i < pairs; ++i) {
			cout << numbers[n - i - 1] << " " << min_num << "\n";
		}
	}
}


/*
4
2
1 4
4
2 8 3 4
5
3 8 5 9 7
6
2 7 5 3 4 8

*/

/*
4 1
8 2
8 4
9 5
7 5
8 7
4 3
5 2
*/