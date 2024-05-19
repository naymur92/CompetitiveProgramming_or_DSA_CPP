/*
https://codeforces.com/problemset/problem/71/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int n;
	cin >> n;

	while(n--)
	{
		string s;
		cin >> s;

		int s_size = s.size();
		if(s_size > 10) {
			cout << s[0] << (s_size - 2) << s[s_size - 1] << endl;
		} else {
			cout << s << endl;
		}
	}
}


/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
*/

/*
word
l10n
i18n
p43s
*/