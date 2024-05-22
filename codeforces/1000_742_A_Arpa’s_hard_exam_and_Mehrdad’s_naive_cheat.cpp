/*
https://codeforces.com/problemset/problem/742/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long n;
	cin >> n;

	int last_digit = 8;

	if(n == 0) {
		last_digit = 1;
	} else {
		n = n % 4;
		if (n == 0) n = 4;
		while(--n)
		{
			last_digit = (last_digit * 8) % 10;
		}		
	}
	cout << last_digit << endl;
}


/*
1
*/

/*
8
*/