/*
https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){	
	int t;
	cin >> t;

	vector<pair<string, int>> v;

	while(t--)
	{
		string s;
		int mark;
		cin >> s >> mark;
		v.push_back({s, mark});
	}

	sort(v.begin(), v.end(), cmp);

	for(auto &item: v) cout << item.first << " " << item.second << endl;
}

/*
3
Eve 78
Bob 99
Alice 78
*/

/*
Bob 99
Alice 78
Eve 78
*/