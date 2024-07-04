/*
https://codeforces.com/problemset/problem/75/A
*/

#include <bits/stdc++.h>

using namespace std;

unsigned long numberWithoutZero(unsigned long num) {
	unsigned long new_num = 0;

	int position = 1;

	while (num > 0) {
		if (num % 10 > 0) {
			new_num += ((num % 10) * position);
			position *= 10;
		}
		// new_num += ((num % 10) * position);
		// cout << new_num << '\n';
		// position *= 10;
		
		num = num / 10;
	}

	return new_num;
}

int main(){
	unsigned long a, b, S;
	cin >> a >> b;
	S = a + b;

	unsigned long new_a, new_b, new_S;
	new_a = numberWithoutZero(a);
	new_b = numberWithoutZero(b);
	new_S = numberWithoutZero(S);

	if (new_a + new_b == new_S) cout << "YES\n";
	else cout << "NO\n";
}


/*
101
102

105
106

*/

/*
YES

NO

*/