#include <bits/stdc++.h>

using namespace std;

int main(){
	// Postfix					() [] -> . ++ --				Left to right
	// Unary				+ - ! ~ ++ -- (type)* & sizeof		Right to left
	// Multiplicative					* / %					Left to right
	// Additive							+ -						Left to right
	// Shift							<< >>					Left to right
	// Relational						< <= > >=				Left to right
	// Equality							== !=					Left to right
	// Bitwise AND							&					Left to right
	// Bitwise XOR							^					Left to right
	// Bitwise OR							|					Left to right
	// Logical AND							&&					Left to right
	// Logical OR							||					Left to right
	// Conditional							?:					Right to left
	// Assignment			= += .= *= /= %= >>= <<= &= ^= |=	Right to left
	// Comma								,					Left to right

	
	cout << 6 * 2 / 4 << endl;
	cout << 6 / 2 * 4 << endl;
}