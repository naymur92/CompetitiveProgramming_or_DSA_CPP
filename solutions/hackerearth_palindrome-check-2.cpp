#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	bool matched = true;

	for (int i = 0; i < s.size() / 2; ++i)
	{
		if(s[i] != s[s.size() - i - 1])
		{
			matched = false;
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
}
