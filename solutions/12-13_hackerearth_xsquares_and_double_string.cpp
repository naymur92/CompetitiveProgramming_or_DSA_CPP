#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		
		int str_count[26] = {0};

		for (int i = 0; i < s.size(); ++i)
		{
			str_count[s[i] - 'a']++;
		}

		int found = 0;
		for (int i = 0; i < 26; ++i)
		{
			if(str_count[i] > 1)
			{
				found++;
				break;
			}
		}
		if(found) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}