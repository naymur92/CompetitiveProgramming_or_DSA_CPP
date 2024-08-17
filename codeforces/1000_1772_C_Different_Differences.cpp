/*
https://codeforces.com/problemset/problem/1772/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int k, n;
		cin >> k >> n;

		int diff = n - k;

		vector<int> numbers(k);
		numbers[0] = 1;

		for (int i = 1; i < k; ++i) {
			int add = diff >= i ? i : 0;
			numbers[i] = numbers[i - 1] + add + 1;
			
			diff -= i;
		}

		for (auto &num: numbers) cout << num << " ";
		cout << "\n";
	}
}


/*
7
5 9
4 12
3 3
3 4
4 4
4 6
8 11

*/

/*
1 3 4 7 8
2 4 7 12
1 2 3
1 3 4
1 2 3 4
2 4 5 6
1 2 3 5 6 7 8 11

*/