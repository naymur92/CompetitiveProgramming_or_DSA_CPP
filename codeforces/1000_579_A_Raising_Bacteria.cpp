/*
https://codeforces.com/problemset/problem/579/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	long int x;
	cin >> x;

	int bact_count = 0;

	while(x > 0)
	{
		bact_count += x % 2;
		x = x/2;
	}
	cout << bact_count << endl;
}


/*
5
*/

/*
2
*/