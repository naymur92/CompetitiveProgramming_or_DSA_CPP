/*
https://codeforces.com/problemset/problem/1388/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		int n_of_8 = ceil(n / 4.0);
		int n_of_9 = n - n_of_8;

		for (int i = 0; i < n_of_9; ++i)
			cout << "9";
		for (int i = 0; i < n_of_8; ++i)
			cout << "8";

		cout << "\n";
	}

}


/*
2
1
3

*/

/*
8
998

*/