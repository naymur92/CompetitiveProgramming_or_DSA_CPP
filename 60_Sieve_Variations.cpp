#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> lp(N, 0), hp(N, 0);

int main()
{	
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i < N; ++i) {
		if (isPrime[i]) {
			lp[i] = hp[i] = i;
			for (int j = 2 * i; j < N; j += i) {
				isPrime[j] = false;
				hp[j] = i;
				if (lp[j] == 0) {
					lp[j] = i;
				}
			}
		}
	}

	// for (int i = 1; i < 400; ++i) {
	// 	cout << lp[i] << " " << hp[i] << "\n";
	// }


	int n = 24;
	/*vector<int> prime_factors;
	while (n > 1) {
		int prime_factor = hp[n];
		while (n % prime_factor == 0) {
			n /= prime_factor;
			prime_factors.push_back(prime_factor);
		}
	}

	for (int prime_factor: prime_factors) {
		cout << prime_factor << "\n";
	}*/

	unordered_map<int, int> prime_factors;
	while (n > 1) {
		int prime_factor = hp[n];
		while (n % prime_factor == 0) {
			n /= prime_factor;
			prime_factors[prime_factor]++;
		}
	}

	for (auto prime_factor: prime_factors) {
		cout << prime_factor.first << " " << prime_factor.second << "\n";
	}
}

/*

*/

/*

*/