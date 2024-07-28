/*
https://codeforces.com/problemset/problem/219/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int k;
	string s;
	cin >> k >> s;

	vector<int> chars(26);

	for (int i = 0; i < k; ++i)
	{
		chars[s[i] - 'a']++;
	}
}


/*
2
aazz

3
abcabcabz

*/

/*
azaz

-1

*/