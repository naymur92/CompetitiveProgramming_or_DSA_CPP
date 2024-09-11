#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
	for (int i = 10; i >= 0; --i) {
		cout << ((num >> i) & 1);
	}
	cout << "\n";
}

int main() {
	for (char i = 'A'; i <= 'E'; ++i) {
		cout << i << "\n";
		printBinary(int(i));
	}

	for (char i = 'a'; i <= 'e'; ++i) {
		cout << i << "\n";
		printBinary(int(i));
	}

	cout << "\n\n\n\n";

	char A = 'A';
	cout << char(A | (1 << 5)) << "\n";	// convert to lowercase

	char a = 'a';
	cout << char(a & (~(1 << 5))) << "\n";	// convert to uppercase
	// cout << char(1 << 5) << "\n";	// print space
	
	printBinary(' ');
	printBinary('_');

	cout << char('C' | ' ') << "\n";	// convert to lowercase
	cout << char('c' & '_') << "\n";	// convert to uppercase
}

/*

*/

/*

*/