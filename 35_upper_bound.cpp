#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a, a+n);

	// for(auto &val: a) cout << val << " ";
	// cout << endl;

	int *ptr = upper_bound(a, a+n, 5);
	if(ptr == (a+n))
	{
		cout << "Not Found!" << endl;
		return 0;
	}
	cout << *ptr << endl;
}

/*
6
4 5 2 25 7 8
*/