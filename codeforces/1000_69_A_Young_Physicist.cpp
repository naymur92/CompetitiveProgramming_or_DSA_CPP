/*
https://codeforces.com/problemset/problem/69/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n;
	cin >> n;
	int numbers[n][3];

	int sum[3];
	sum[0] = sum[1] = sum[2] = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> numbers[i][0] >> numbers[i][1] >> numbers[i][2];
		sum[0] += numbers[i][0];
		sum[1] += numbers[i][1];
		sum[2] += numbers[i][2];
	}
	if(sum[0] == 0 && sum[1] == 0 && sum[2] == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}


/*
3
4 1 7
-2 4 -1
1 -5 -3

*/

/*
NO
*/