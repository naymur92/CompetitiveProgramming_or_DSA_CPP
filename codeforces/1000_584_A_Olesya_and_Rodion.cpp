/*
https://codeforces.com/problemset/problem/584/A
*/

#include <bits/stdc++.h>

using namespace std;

void printDigit(int count, int digit){
	while(count--)
	{
		cout << digit;
	}
}

int main(){
	int n, t;
	cin >> n >> t;

	if(t == 10) {
		if(n > 1) {
			printDigit(n- 1, 1);
			cout << 0 << endl;
		} else cout << -1 << endl;
	} else {
		printDigit(n, t);
		cout << endl;
	}
}


/*
3 2
/*
712
*/