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
		int n;
		cin >> n;

		ull ans = 0;
		ans = (ull) n * (n + 1) * (n - 1) / 3;
		cout << ans << endl;
	}
}


/*
3
1
5
499993

*/

/*
0
40
41664916690999888

*/