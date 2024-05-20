/*
https://codeforces.com/problemset/problem/131/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	string s;
	cin >> s;

	bool is_all_upper = true;
	// bool is_first_lower = islower(s[0]);

	for (int i = 1; i < s.size(); ++i)
	{
		if(islower(s[i])) is_all_upper = false;
	}
	// (is_first_lower && is_all_upper) || (!is_first_lower && is_all_upper)
	if(is_all_upper) {
		for (int i = 0; i < s.size(); ++i)
		{
			if(isupper(s[i])) s[i] = tolower(s[i]);
			else if(islower(s[i])) s[i] = toupper(s[i]);
		}
	}
	cout << s << endl;
}


/*
cAPSlOCK
*/

/*
cAPSlOCK
*/