/*
https://codeforces.com/problemset/problem/1858/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		vector<int> numbers(n);
		int ind = 0;

		for (int i = 1; i <= n; i += 2) {
			for (int j = i; j <= n; j *= 2) {
				numbers[ind++] = j;
			}
		}

		for (int i = 0; i < n; ++i)
			cout << numbers[i] << " ";
		cout << "\n";
	}
}


/*
4
5
2
7
10

*/

/*
1 2 4 3 5 
1 2 
1 2 3 6 4 5 7 
1 2 3 4 8 5 10 6 9 7

*/