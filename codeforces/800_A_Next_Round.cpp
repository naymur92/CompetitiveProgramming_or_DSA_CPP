/*
https://codeforces.com/problemset/problem/158/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n, k;
	cin >> n >> k;

	int cn = 0;

	int score;
	bool is_break = false;
	for (int i = 1; i <= k; ++i)
	{
		cin >> score;
		if(score == 0) {
			is_break = true;
			break;
		}
		cn++;
	}
	if(!is_break && n > k) {
		for (int i = k + 1; i <= n; ++i)
		{
			int new_sc;
			cin >> new_sc;
			if(score == new_sc) cn++;
			else break;
		}
	}
	
	cout << cn << endl;
}

/*
8 5
10 9 8 7 7 7 5 5
*/

/*
6
*/