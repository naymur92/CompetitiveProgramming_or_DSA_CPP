/*
https://codeforces.com/problemset/problem/58/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	string s;
	cin >> s;

	string S = "hello";

	int char_found = 0;

	int j = 0;
	for (int i = 0; i < S.size(); ++i)
	{
		while(j < s.size()) {
			if(S[i] == s[j]) {
				char_found++;
				j++;
				break;
			} else {
				j++;
			}
		}
	}
	cout << (char_found == S.size() ? "YES" : "NO") << endl;
}


/*
ahhellllloou
*/

/*
YES
*/