/*
https://leetcode.com/problems/k-th-symbol-in-grammar/
*/

#include <bits/stdc++.h>
using namespace std;

int kthGrammar(int n, int k) {
	if (n == 1) return 0;

	if (k % 2 == 1) return kthGrammar(n - 1, (k + 1) / 2);
	else return !kthGrammar(n - 1, (k + 1) / 2);
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		
		cout << kthGrammar(n, k) << "\n";
	}
}

/*
3
1 1
2 1
2 2

*/

/*
0
0
1
*/