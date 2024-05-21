/*
https://codeforces.com/problemset/problem/1374/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string s;

		cin >> n >> s;

		int move_count = 0;
		int balance = 0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i] == '(') balance++;
			else balance--;
			
			if (balance < 0)
			{
				move_count++;
				balance++;
			}
		}
		cout << move_count << endl;
	}
}


/*
4
2
)(
4
()()
8
())()()(
10
)))((((())
*/

/*
1
0
1
3
*/