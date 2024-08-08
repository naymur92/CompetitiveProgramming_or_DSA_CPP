/*
https://codeforces.com/contest/1999/problem/0
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	int num;
    	cin >> num;

    	int sum = 0;
    	sum += num % 10;
    	num /= 10;
    	sum += num % 10;

    	cout << sum << "\n";
    }
}


/*
8
77
21
40
34
19
84
10
99


*/

/*
14
3
4
7
10
12
1
18


*/