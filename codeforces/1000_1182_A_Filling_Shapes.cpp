/*
https://codeforces.com/problemset/problem/1182/A
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;

int main(){
	int n;
	cin >> n;
	if(n % 2 != 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << (ul) pow(2, n / 2) << endl;
	}
}


/*
4
*/

/*
4
*/