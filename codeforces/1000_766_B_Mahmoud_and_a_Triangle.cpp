/*
https://codeforces.com/problemset/problem/766/B
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;

int main(){
	int n;
	cin >> n;
	vector<ul> a;

	for (int i = 0; i < n; ++i)
	{
		ul s;
		cin >> s;		
		a.push_back(s);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < n - 2; ++i)
	{
		if((a[i] + a[i + 1]) > a[i + 2]) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}


/*
5
1 5 3 2 4
*/

/*
YES
*/