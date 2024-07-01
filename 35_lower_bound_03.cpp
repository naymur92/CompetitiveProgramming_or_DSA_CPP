#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> m;

	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		m[x] = y;
	}

	// for(auto &val: m) cout << val.first << " " << val.second << endl;

	auto it = m.lower_bound(2);

	if(it == m.end())
	{
		cout << "Not Found!" << endl;
		return 0;
	}
	cout << it->first << " " << it->second << endl;
}

/*
6
4 3
5 5
2 3
25 6
7 9
8 5
*/