#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	// for(auto &val: a) cout << val << " ";
	// cout << endl;

	auto it = upper_bound(a.begin(), a.end(), 5);
	if(it == a.end())
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