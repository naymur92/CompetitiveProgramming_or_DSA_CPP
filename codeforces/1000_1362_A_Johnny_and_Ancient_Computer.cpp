/*
https://codeforces.com/problemset/problem/1362/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--)
	{
		unsigned long long a, b;
		cin >> a >> b;		

		if (a == b)
			cout << 0 << "\n";
		else {
			unsigned long long op1 = max(a, b);
			unsigned long long op2 = min(a, b);

			if ((op1 % 8 == 0 || op1 % 4 == 0 || op1 % 2 == 0)) {				
				int count = 0;
				int div[3];
				div[0] = 8;
				div[1] = 4;
				div[2] = 2;

				for (int i = 0; i < 3; ++i) {
					while (op1 % div[i] == 0 && op1 / div[i] >= op2) {
						op1 /= div[i];
						count++;
					}
				}
				cout << (op1 == op2 ? count : -1) << "\n";
			} else
				cout << -1 << "\n";
		}
	}
}


/*
10
10 5
11 44
17 21
1 1
96 3
2 128
1001 1100611139403776
1000000000000000000 1000000000000000000
7 1
10 8

*/

/*
1
1
-1
0
2
2
14
0
-1
-1

*/