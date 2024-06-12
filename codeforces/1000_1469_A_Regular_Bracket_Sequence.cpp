/*
https://codeforces.com/problemset/problem/1469/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;

		if (s.size() % 2 != 0 || s[0] == ')' || s[s.size() - 1] == '(') puts("NO");
		else puts("YES");
	}
}


/*
5
()
(?)
(??)
??()
)?(?

*/

/*
YES
NO
YES
YES
NO

*/