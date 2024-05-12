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

	// sort(a, a+n);
	// sort(a + 2, a+n);
	sort(a + 1, a + 4);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}	
}