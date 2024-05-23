/*
https://codeforces.com/problemset/problem/124/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;
	cin >> n >> a >> b;
	if((a + b) < n) {
		cout << b + 1 << endl;
	} else {
		cout << n - a << endl;
	}
}


/*
3 1 1

*/

/*
2
*/