/*
https://codeforces.com/problemset/problem/1521/A
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int A, B;
		cin >> A >> B;

		if(B == 1) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			cout << A << " " << (ull) A * B << " " << (ull) A * (B + 1) << endl;
		}
	}
}


/*
3
5 3
13 2
7 11
*/

/*
YES
10 50 60
YES
169 39 208
YES
28 154 182
*/