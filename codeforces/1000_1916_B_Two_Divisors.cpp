/*
https://codeforces.com/problemset/problem/1916/B
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef unsigned long ul;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		ull a, b, lcm, x;

		cin >> a >> b;
		lcm = (a * b) / __gcd(a, b);

		if (lcm != b) x = lcm;
		else if(a == 1) x = lcm * b;
		else {
			ul div = 2;
			while (true) {
				if (a % div == 0 || b % div == 0) {
					x = 1ull * div * lcm;
					break;
				}
				div++;
			}
		}

		cout << x << "\n";
	}
}


/*
8
2 3
1 2
3 11
1 5
5 10
4 6
3 9
250000000 500000000


*/

/*
6
4
33
25
20
12
27
1000000000

*/