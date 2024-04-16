#include <bits/stdc++.h>
using namespace std;

int array_sum(int n, int a[]){
	if (n < 0) return 0;
	return a[n] + array_sum(n - 1, a);
}

int main(){
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	cout << array_sum(n - 1, a);

}