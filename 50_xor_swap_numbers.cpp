#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10; i >= 0; --i) {
		cout << ((num >> i) & 1);
	}
	cout << "\n";
}

int main() {
	int a = 4, b = 6;

	cout << a << " " << b << "\n";

	a = a ^ b;
	
	b = b ^ a;
	// b = b ^ (a ^ b) = a

	a = a ^ b;
	// a = (a ^ b) ^ b = a

	cout << a << " " << b << "\n";
}

/*

*/

/*

*/