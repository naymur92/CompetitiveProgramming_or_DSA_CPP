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
	printBinary(a);
	int i = 4;

	int b = (a & ((1 << (i + 1)) - 1));

	printBinary(b);
}

/*
115
00001110011
00000011111
00000100000 - 1
*/

/*

*/