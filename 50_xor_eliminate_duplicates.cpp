/*
Given array of n integers. All integers are
presenet in even count except one.
Find that one integer which has odd count
in O(N) time complexity and O(1) space.

N < 10^5
a[i] < 10^5

*/

#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10; i >= 0; --i) {
		cout << ((num >> i) & 1);
	}
	cout << "\n";
}

int main() {
	// a ^ b ^ c ^ b ^ d ^ c = a

	int n;
	cin >> n;

	int x;
	int ans = 0;

	for (int i = 0; i < n; ++i) {
		cin >> x;
		ans ^= x;
	}

	cout << ans << "\n";

}

/*
9
2 4 6 7 7 4 2 2 2
*/

/*
6
*/