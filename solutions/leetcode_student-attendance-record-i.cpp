#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;

	int absent = 0, present = 0, late = 0, len = s.size();
	bool con_late = false;

	for(int i = 0; i < len; ++i)
	{
		if(s[i] == 'L')
		{
			late++;			
		} else {
			late = 0;
		}

		if(s[i] == 'A')
		{
			absent++;
		}

		if(absent == 2)
		{
			break;
		}

		if(late == 3)
		{
			con_late = true;
			break;
		}
	}

	if(absent < 2 && !con_late)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}