/*
https://codeforces.com/problemset/problem/339/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	long long min_time = 0;
	int cur_house = 1;

	for (int i = 0; i < m; ++i)
	{
		int a;
		cin >> a;

		if (a >= cur_house) min_time = min_time + a - cur_house;
		else min_time = min_time + a - cur_house + n;

		cur_house = a;
	}

	cout << min_time << endl;
}


/*
4 3
3 2 3

*/

/*
6

*/