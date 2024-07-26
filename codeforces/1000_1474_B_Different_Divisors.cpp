/*
https://codeforces.com/problemset/problem/1474/B
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int num) {
	if (num == 1) return false;

	for (int i = 2; i * i <= num; ++i)
	{
		if (num % i == 0) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int d;
		cin >> d;

		int num = 1;
		ll result = 1;
		for (int i = 0; i < 2; ++i)
		{
			num += d;

			// check prime and increase until it is prime
			while (!isPrime(num)) num++;

			result *= (ll) num;
		}

		cout << result << "\n";
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