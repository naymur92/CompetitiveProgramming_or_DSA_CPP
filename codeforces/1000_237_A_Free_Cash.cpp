/*
https://codeforces.com/problemset/problem/237/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n;
	cin >> n;
	
	vector<pair<int,int>> times(n);

	for (int i = 0; i < n; ++i)
	{
		int h, m;
		cin >> h >> m;
		times[i] = {h, m};
	}
	
	int cash = 1;
	int max_cash = 1;

	for (int i = 1; i < n; ++i)
	{
		if(times[i].first == times[i - 1].first && times[i].second == times[i - 1].second) cash++;
		else cash = 1;

		if(cash > max_cash) max_cash = cash;
	}
	cout << max_cash << endl;
}


/*
4
8 0
8 10
8 10
8 45

*/

/*
2
*/