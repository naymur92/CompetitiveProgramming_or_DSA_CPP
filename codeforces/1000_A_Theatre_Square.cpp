/*
https://codeforces.com/problemset/problem/1/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	unsigned long int m, n, a;
	cin >> m >> n >> a;

	double max_m = ceil(1.0 * m/a);
	double max_n = ceil(1.0 * n/a);
	
	unsigned long long int block;
	block = max_m * max_n;

	cout << block << endl;
}


/*
4
6 6 4
*/

/*
4
*/