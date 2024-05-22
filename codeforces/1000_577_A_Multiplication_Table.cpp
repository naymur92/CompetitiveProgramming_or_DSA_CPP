/*
https://codeforces.com/problemset/problem/577/A
*/

#include <bits/stdc++.h>
typedef unsigned long ul;
// typedef unsigned long long ull;

using namespace std;

int main(){
	int n;
	ul x;
	cin >> n >> x;

	int x_count = 0;

	for (int i = 1; i <= n; ++i)
	{
		if(x % i == 0 && x / i <= n) x_count++;
	}
	cout << x_count << endl;
}


/*
10 5
*/

/*
2
*/