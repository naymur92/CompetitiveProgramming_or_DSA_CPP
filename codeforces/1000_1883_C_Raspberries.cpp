/*
https://codeforces.com/problemset/problem/1883/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;

		int min_op = INT_MAX;
		int even_count = 0;
		for (int i = 0; i < n; ++i) {
			int num;
			cin >> num;
			int op = num % k ? k - (num % k) : 0;
			if (op < min_op) min_op = op;

			if (k == 4 && num % 2 == 0 && n > 1) even_count++;
		}

		if (k == 4 && n > 1) {
			min_op = min(min_op, max(0, 2 - even_count));
		}

		cout << min_op << "\n";
	}
}


/*
15
2 5
7 3
3 3
7 4 1
5 2
9 7 7 3 9
5 5
5 4 1 2 3
7 4
9 5 1 5 9 5 1
3 4
6 3 6
3 4
6 1 5
3 4
1 5 9
4 4
1 4 1 1
3 4
3 5 3
4 5
8 9 9 3
2 5
1 6
2 5
10 10
4 5
1 6 1 1
2 5
7 7


*/

/*
2
2
1
0
2
0
1
2
0
1
1
4
0
4
3

*/