/*
https://codeforces.com/problemset/problem/1474/B
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int d;
		cin >> d;
		int first = 1;
		int second = first + d;
		int third = second + d;
		int fourth = first * second * third;

		cout << fourth << endl;
	}
}


/*
2
1
2

*/

/*
6
15

*/