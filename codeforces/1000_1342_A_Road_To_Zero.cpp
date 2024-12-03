/*
https://codeforces.com/problemset/problem/1342/A
*/

#include <bits/stdc++.h>
typedef unsigned long ul;
typedef unsigned long long ull;

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		ul x, y, a, b;
		cin >> x >> y >> a >> b;
		ull min_cost = 0;

		ull diff =  x < y ? (y - x) : (x - y);
		ull lowest = x < y ? x : y;

		ull cost = (lowest * b) + (diff * a);
		min_cost = min(cost, (ull) (x + y) * a);

		cout << min_cost << endl;
	}
}


/*
2
1 3
391 555
0 0
9 4

*/

/*
1337
0

*/