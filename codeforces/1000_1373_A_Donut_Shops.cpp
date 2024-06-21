/*
https://codeforces.com/problemset/problem/1373/A
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;
typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		ul a, b, c;
		cin >> a >> b >> c;
		double unit_price = 1.0 * c / b;

		if(unit_price >= a) cout << 1 << " " << -1 << endl;
		else if(a >= c) cout << -1 << " " << b << endl;
		else
		{
			ul max = ceil(1.0 * c / a);
			max--;
			cout << max << " " << b << endl;
		}
		
	}
}


/*
4
5 10 4
4 5 20
2 2 3
1000000000 1000000000 1000000000
*/

/*
-1 20
8 -1
1 2
-1 1000000000
*/