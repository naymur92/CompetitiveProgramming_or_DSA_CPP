/*
https://codeforces.com/problemset/problem/268/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int b_press = n;
	for (int i = 1; i < n; ++i)
	{
		b_press = b_press + i * (n - i);
	}
	cout << b_press << endl;
}


/*
2
*/

/*
3
*/