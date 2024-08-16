#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10; i >= 0; --i) {
		cout << ((num >> i) & 1);
	}
	cout << "\n";
}

int main() {
	int a = 115;
	
	// cout << (a & (a - 1)) << "\n";
	if (a & (a - 1)) {
		cout << "Not power of 2\n";
	} else {
		cout << "Power of 2\n";
	}

	a = 128;
	if (a & (a - 1)) {
		cout << "Not power of 2\n";
	} else {
		cout << "Power of 2\n";
	}
}

/*

*/

/*

*/