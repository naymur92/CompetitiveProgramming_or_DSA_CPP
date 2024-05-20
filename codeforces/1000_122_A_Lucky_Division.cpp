/*
https://codeforces.com/problemset/problem/122/A
*/

#include <bits/stdc++.h>

using namespace std;

int isLucky(int number){
	if(number == 0) return 1;

	return (number % 10 == 4 || number % 10 == 7) * isLucky(number / 10);
}

int main(){	
	int n;
	cin >> n;

	if(n < 4) cout << "NO" << endl;
	else if (isLucky(n)) cout << "YES" << endl;
	else {
		bool is_lucky = false;
		for (int i = 2; i <= n/2; ++i)
		{
			if(n % i == 0) {
				int q = n / i;
				if(isLucky(i) || isLucky(q)) {
					is_lucky = true;
					break;
				}
			}
		}
		cout << (is_lucky ? "YES" : "NO") << endl;
	}
}


/*
16
*/

/*
YES
*/