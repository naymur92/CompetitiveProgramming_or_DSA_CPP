#include <bits/stdc++.h>
using namespace std;

bool should_i_swap(int a, int b){
	return a > b;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			// if(a[i] > a[j]) swap(a[i], a[j]);
			if(should_i_swap(a[i], a[j])) swap(a[i], a[j]);
		}
	}

	for(auto &val: a) cout << val << " ";
	cout << endl;
}

/*
6
4 5 2 25 7 8
*/