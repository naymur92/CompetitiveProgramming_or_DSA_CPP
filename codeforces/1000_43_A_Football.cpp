/*
https://codeforces.com/problemset/problem/43/A
*/

#include <bits/stdc++.h>

using namespace std;

bool custom_comparator(pair<string, int> &a, pair<string, int> &b) {
	return a.second > b.second;
}

int main(){
	map<string, int> teams;

	int n;
	cin >> n;
	while(n--)
	{
		string team;
		cin >> team;

		teams[team]++;
	}

	vector<pair<string, int>> scores;
	for(auto &it: teams)
	{
		scores.push_back(it);
	}

	sort(scores.begin(), scores.end(), custom_comparator);
	
	cout << scores[0].first << endl;
}


/*
5
A
ABA
ABA
A
A

*/

/*
A
*/