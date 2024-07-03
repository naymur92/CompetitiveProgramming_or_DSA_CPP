/*
https://codeforces.com/problemset/problem/1840/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, k;
		long q;
		cin >> n >> k >> q;

		unsigned long long comfortableDays = 0;
		unsigned long long ways = 0;

		for (int i = 0; i < n; ++i) {
			long temp;
			cin >> temp;
			if (temp <= q) comfortableDays++;
			else {
				if (comfortableDays >= k) ways += ((comfortableDays - k + 1) * (comfortableDays - k + 2) / 2);
				comfortableDays = 0;
			}
		}

		if (comfortableDays >= k) ways += ((comfortableDays - k + 1) * (comfortableDays - k + 2) / 2);

		cout << ways << "\n";
	}
}


/*
7
3 1 15
-5 0 -10
5 3 -33
8 12 9 0 5
4 3 12
12 12 10 15
4 1 -5
0 -1 2 5
5 5 0
3 -1 4 -5 -3
1 1 5
5
6 1 3
0 3 -2 5 -4 -4
*/

/*
6
0
1
0
0
1
9
*/