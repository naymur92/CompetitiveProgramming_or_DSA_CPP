/*
https://codeforces.com/problemset/problem/118/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		char c = s[i];
		if(isupper(c)) c = tolower(c);
		if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')) {
			cout << '.' << c;
		}
	}
	cout << endl;
}


/*
Codeforces
*/

/*
.c.d.f.r.c.s
*/