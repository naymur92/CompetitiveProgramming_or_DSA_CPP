/*
https://codeforces.com/problemset/problem/479/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	int a, b, c;
	cin >> a >> b >> c;

	int sum = a + b + c;
	sum = max(sum, (a + b) * c);
	sum = max(sum, a * (b + c));
	sum = max(sum, a + b * c);
	sum = max(sum, a * b + c);
	sum = max(sum, a * b * c);

	cout << sum << endl;
}


/*
2
10
3

*/

/*
60
*/