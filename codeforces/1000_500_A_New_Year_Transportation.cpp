/*
https://codeforces.com/problemset/problem/500/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;

	int A[n + 5];

	for (int i = 1; i < n; ++i)
	{
		cin >> A[i];
	}

	A[n] = 1;	// for skip loop error
	for (int cur_house = 1; cur_house <= n; cur_house += A[cur_house])
	{
		if(cur_house == t){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}


/*
8 5
1 2 1 2 1 1 1

*/

/*
NO
*/