/*
https://codeforces.com/problemset/problem/4/C
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	unordered_map<string, int> user_names;

	for(int i = 0; i < n; ++i)
	{
		string tmp;
		cin >> tmp;
		user_names[tmp]++;

		if(user_names[tmp] == 1)
			cout << "OK" << endl;
		else
			cout << tmp << (user_names[tmp] - 1) << endl;
	}
}

/*
6
first
first
second
second
third
third
*/

/*
OK
first1
OK
second1
OK
third1
*/