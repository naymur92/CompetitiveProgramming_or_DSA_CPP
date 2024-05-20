/*
https://codeforces.com/problemset/problem/263/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int m = 5, n = 5;
	int c_m = 3, c_n = 3;
	int p_m, p_n;
	int steps = 0;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int num;
			cin >> num;
			if(num == 1) {
				p_m = i + 1;
				p_n = j + 1;
				break;
			}
		}
	}
	steps = abs(p_m - c_m) + abs(p_n - c_n);
	
	cout << steps << endl;
}

/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
*/

/*
3
*/