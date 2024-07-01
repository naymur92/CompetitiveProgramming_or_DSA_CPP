/*
https://www.hackerearth.com/problem/algorithm/stl/
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){	
	int n;
	cin >> n;

	vector<pair<string, int>> v;

	while(n--)
	{
		string s;
		int j;
		cin >> s >> j;
		v.push_back({s, j});
	}

	sort(v.begin(), v.end(), cmp);

	for(auto &item: v) cout << item.first << " " << item.second << endl;
}

/*
3
Smallwood 3
Vivian 5
Norbury 5
*/

/*
Norbury 5
Vivian 5
Smallwood 3
*/