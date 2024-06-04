/*
https://codeforces.com/problemset/problem/1791/D
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;

		unordered_set<char> a;
		unordered_set<char> b;

		int forward_unique_count[n - 1];
		int backward_unique_count[n - 1];

		for (int i = 0; i < n; ++i)
		{
			if (i < n - 1)
			{
				a.insert(s[i]);
				forward_unique_count[i] = a.size();
			}
			if (i > 0)
			{
				b.insert(s[n - i]);
				backward_unique_count[n - i - 1] = b.size();
			}
			
		}

		// test code
		// for (int i = 0; i < n - 1; ++i)
		// {
		// 	cout << forward_unique_count[i] << " ";
		// }
		// cout << endl;
		// for (int i = 0; i < n - 1; ++i)
		// {
		// 	cout << backward_unique_count[i] << " ";
		// }
		// cout << endl;

		int max_unique = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			int un = forward_unique_count[i] + backward_unique_count[i];
			if(un > max_unique) max_unique = un;
		}
		cout << max_unique << endl;
	}
}


/*
5
2
aa
7
abcabcd
5
aaaaa
10
paiumoment
4
aazz

*/

/*
2
7
2
10
3

*/