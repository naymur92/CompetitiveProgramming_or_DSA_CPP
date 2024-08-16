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

	// toggle bit
	printBinary(a ^ (1 << 1));	// toggle 1st bit
	printBinary(a ^ (1 << 3));	// toggle 3rd bit
}

/*

*/

/*

*/