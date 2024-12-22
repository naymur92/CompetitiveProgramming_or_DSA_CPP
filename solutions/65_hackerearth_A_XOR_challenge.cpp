/*
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	cin >> c;

	int bit_ct = (int) log2(c) + 1;

	int a = 0, b = 0;
	vector<int> set_bits;
	for (int i = 0; i < bit_ct; ++i) {
		if (c & (1 << i)) {
			set_bits.push_back(i);
		} else {
			a |= (1 << i);
			b |= (1 << i);
		}
	}

	int n = set_bits.size();
	int nz = 1 << n;
	long long ans = 0;
	for (int mask = 0; mask < nz; ++mask) {
		int a_cp = a, b_cp = b;
		for (int j = 0; j < n; ++j) {
			if (mask & (1 << j)) {
				a_cp |= (1 << set_bits[j]);
			} else {
				b_cp |= (1 << set_bits[j]);
			}
		}
		ans = max(ans, a_cp * 1LL * b_cp);
	}

	cout << ans << "\n";
}

/*
13
*/


/*
70
*/