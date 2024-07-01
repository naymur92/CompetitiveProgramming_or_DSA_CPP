#include <bits/stdc++.h>
using namespace std;

// comparator function for inbuilt sort function
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first != b.first){
		return a.first < b.first;	// increasing order
	}
	return a.second > b.second;	// decreasing order
}

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i].first >> a[i].second;
	}

	// sort(a.begin(), a.end());
	sort(a.begin(), a.end(), cmp);

	for(auto &val: a) cout << val.first << " " << val.second << endl;
}

/*
6
4 3
5 5
5 3
25 6
7 9
8 5
*/