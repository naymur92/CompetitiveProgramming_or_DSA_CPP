#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> s;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		s.insert(x);
	}

	// for(auto &val: s) cout << val << " ";
	// cout << endl;

	// for (int i = 0; i < 1e5; ++i)
	// {
	// 	// auto it = lower_bound(s.begin(), s.end(), rand());
	// 	auto it = s.lower_bound(rand());
	// }
	
	auto it = s.upper_bound(5);
	if(it == s.end())
	{
		cout << "Not Found!" << endl;
		return 0;
	}
	cout << *it << endl;
}

/*
6
4 5 2 25 7 8
*/