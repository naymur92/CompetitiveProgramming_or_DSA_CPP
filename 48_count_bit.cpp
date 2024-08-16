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

	int c = 0;
	for (int i = 31; i >= 0; --i) {
		if ((a & (1 << i)) != 0) c++;
	}
	cout << c << "\n";

	cout << __builtin_popcount(a) << "\n";


	a = (1LL<<31) - 1;
	c = 0;
	for (int i = 31; i >= 0; --i) {
		if ((a & (1 << i)) != 0) c++;
	}
	cout << c << "\n";
	cout << __builtin_popcount(a) << "\n";

	// for long number
	cout << __builtin_popcountll(1LL<<35) << "\n";
}

/*

*/

/*

*/