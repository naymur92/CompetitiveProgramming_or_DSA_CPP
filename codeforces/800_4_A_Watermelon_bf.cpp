/*
https://codeforces.com/problemset/problem/4/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n;
	cin >> n;

	if(n % 2 == 1) {
		cout << "NO" << endl;
	} else {
		bool found = false;
		for (int i = 2; i <= n; i += 2)
		{
			for (int j = i; i + j <= n; j += 2)
			{
				if((i + j) == n) {
					found = true;
					break;
				}
			}
			if(found) break;
		}
		if(found) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	
}

/*
8
*/

/*
YES
*/