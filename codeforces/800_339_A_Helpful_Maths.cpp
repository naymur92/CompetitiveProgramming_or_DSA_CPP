/*
https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	string s;
	cin >> s;

	int s_size = s.size();

	if(s_size == 1) cout << s << endl;
	else {
		for (int i = 0; i < s_size; i += 2)
		{
			for (int j = i + 2; j < s_size; j += 2)
			{
				if(s[i] > s[j]) swap(s[i], s[j]);
			}
		}
		cout << s << endl;
	}
}

/*
1+1+3+1+3
*/

/*
1+1+1+3+3
*/