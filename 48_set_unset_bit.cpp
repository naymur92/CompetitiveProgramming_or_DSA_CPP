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

	printBinary(a);

	// set bit
	printBinary(a | (1 << 1));	// set 1st bit

	// unset bit
	printBinary(a & (~(1 << 3)));	// unset 3rd bit
}

/*

*/

/*

*/