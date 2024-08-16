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

	// integer division
	cout << (a >> 1) << "\n";

	// multiply
	cout << (a << 1) << "\n";
	
}

/*

*/

/*

*/