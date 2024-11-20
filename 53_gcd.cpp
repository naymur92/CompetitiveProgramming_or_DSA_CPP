#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a % b == 0) return b;

	return gcd(b, a % b);
}

int main()
{
	cout << gcd(12, 4) << "\n";
	cout << __gcd(6, 18) << "\n";
}

/*

*/

/*

*/