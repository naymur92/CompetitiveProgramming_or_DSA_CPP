/*
https://codeforces.com/problemset/problem/231/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n;
	cin >> n;

	int sol_count = 0;
	while(n--)
	{
		int pr_1, pr_2, pr_3;
		cin >> pr_1 >> pr_2 >> pr_3;
		if((pr_1 + pr_2 + pr_3) > 1) sol_count++;
	}
	cout << sol_count << endl;
}

/*
3
1 1 0
1 1 1
1 0 0

*/

/*
2

*/