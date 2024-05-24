/*
https://codeforces.com/problemset/problem/450/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	queue<pair<int, int>> candies;

	for (int i = 1; i <= n; ++i)
	{
		int a;
		cin >> a;
		candies.push({i, a});
	}

	int last_go = 0;

	while(!candies.empty())
	{
		last_go = candies.front().first;
		if(candies.front().second > m) {
			candies.push({last_go, candies.front().second - m});
		}
		candies.pop();
	}

	cout << last_go << endl;

}


/*
5 2
1 3 1 4 2
*/

/*
4
*/