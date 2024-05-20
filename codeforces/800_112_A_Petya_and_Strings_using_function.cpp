/*
https://codeforces.com/problemset/problem/112/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	string s1, s2;

	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); ++i)
	{
		char c1 = s1[i];
		char c2 = s2[i];

		if(isupper(c1)) s1[i] = tolower(c1);
		if(isupper(c2)) s2[i] = tolower(c2);

	}
	if(s1 == s2) cout << 0 << endl;
	else if(s1 < s2) cout << -1 << endl;
	else cout << 1 << endl;
}

/*
abcdefg
AbCdEfF

*/

/*
1
*/