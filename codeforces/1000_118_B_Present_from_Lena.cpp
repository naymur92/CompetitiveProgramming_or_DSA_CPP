/*
https://codeforces.com/problemset/problem/118/B
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
		if(n == 1) cout << -1 << endl;
		else
		{
			string s = "2";
			for (int i = 0; i < n - 1; ++i)
			{
				s += '3';
			}
			cout << s << endl;
		}
	}
}


/*
4
1
2
3
4
*/

/*
-1
57
239
6789
*/