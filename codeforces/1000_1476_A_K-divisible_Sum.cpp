/*
https://codeforces.com/problemset/problem/1476/A
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
		ul n, k;
		cin >> n >> k;

		if(n % k == 0) cout << 1 << endl;
		else if(n < k) cout << (ul) ceil(1.0 * k/n) << endl;
		else cout << 2 << endl;
	}

}


/*
4
1 5
4 3
8 8
8 17
*/

/*
5
2
1
3

*/