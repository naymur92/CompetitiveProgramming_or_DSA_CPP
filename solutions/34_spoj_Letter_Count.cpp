/*
https://www.spoj.com/problems/MAY99_E1/
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){	
	int n;
	cin >> n;

	while(n--)
	{
		string s;
		cin >> s;
		unordered_map<char, int> m;

		for (int i = 0; i < s.size(); ++i)
		{
			m[s[i]]++;
		}

		vector<pair<char, int>> v;
		for(auto &item: m) v.push_back({item.first, item.second});

		sort(v.begin(), v.end(), cmp);

		// for(auto &item: v) cout << item.first << " " << item.second << endl;
		// cout << endl;

		cout << v[0].first << endl;
	}
}

/*
3
abcdabcdaaaa
abcAbcAbcabc
aDDa
*/

/*
a
b
D
*/