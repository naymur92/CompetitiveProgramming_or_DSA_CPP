/*
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/hacker-with-prime-bebe28ac/
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int a[N];
int hp[N];
int canRemove[N];

vector<int> primeFactors(int x) {
	vector<int> pfs;
	while (x > 1) {
		int pf = hp[x];
		while (x % pf == 0) x /= pf;
		pfs.push_back(pf);
	}
	return pfs;
}

int main() {
	hp[0] = hp[1] = 0;
	for (int i = 2; i < N; ++i) {
		if (hp[i] == 0) {
			for (int j = i; j < N; j += i) {
				hp[j] = i;
			}
		}
	}


	int n, q;
	cin >> n >> q;

	for (int i = 0; i < n; ++i) {
		// cin >> a[i];
		int num;
		cin >> num;
		a[num]++;
	}

	for (int i = 2; i < N; ++i) {
		if (a[i]) {
			for (long long j = i; j < N; j *= i) {
				canRemove[j] = 1;
			}
		}
	}

	while (q--) {
		int x;
		cin >> x;

		vector<int> pfs = primeFactors(x);

		bool is_possible = false;
		for (int i = 0; i < pfs.size(); ++i) {
			for (int j = i; j < pfs.size(); ++j) {
				int product = pfs[i] * pfs[j];
				if (i == j and x % product != 0) continue;

				int toRem = x / product;
				if (canRemove[toRem] == 1 || toRem == 1) {
					is_possible = true;
					break;
				}
			}
			if (is_possible) break;
		}

		cout << (is_possible ? "YES\n" : "NO\n");
	}
}

/*
4 3
2 22 7 10
16
429
42
*/


/*
YES
NO
YES
*/