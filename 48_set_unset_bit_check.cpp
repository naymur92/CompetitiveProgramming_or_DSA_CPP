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

	int i = 0;
	if ((a & (1 << i)) != 0) {
		cout << i << "-th bit " << "set\n";
	} else {
		cout << i << "-th bit " << "not set\n";
	}


	i = 1;
	if ((a & (1 << i)) != 0) {
		cout << i << "-th bit " << "set\n";
	} else {
		cout << i << "-th bit " << "not set\n";
	}
}

/*

*/

/*

*/