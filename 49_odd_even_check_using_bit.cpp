#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10; i >= 0; --i) {
		cout << ((num >> i) & 1);
	}
	cout << "\n";
}

int main() {
	int a = 9;

	for (int i = 0; i < 8; ++i) {
		printBinary(i);

		if (i&1) cout << "odd\n";
		else cout << "even\n";
	}
}

/*

*/

/*

*/