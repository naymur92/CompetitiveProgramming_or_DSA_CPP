/*
https://codeforces.com/problemset/problem/476/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	for (int x = 0; x <= n; ++x)
	{
		for (int y = ((n - x) / 2) + 1; y >= (n - x) / 2; --y)
		{
			if((x + 2 * y) == n) {
				if ((x + y) % m == 0)
				{
					cout << (x + y) << endl;
					return 0;
				}
			}
		}
	}
	cout << -1 << endl;
}


/*
10 2
/*
6
*/