/*
https://leetcode.com/problems/count-primes/description/
*/

#include <bits/stdc++.h>

using namespace std;

auto calc = []() {
	int N = 5e6 + 10;

	vector<bool> isPrime(N, true);
	vector<int> primePrefix(N + 1, 0);

	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i < N; ++i) {
		primePrefix[i] += primePrefix[i - 1];
		if (isPrime[i]) {
			primePrefix[i + 1] += 1;
			for (int j = 2 * i; j < N; j += i) {
				isPrime[j] = false;
			}
		}		
	}

	return primePrefix;
}();

int countPrimes(int n) {
	return calc[n];
}

int main() {
	cout << countPrimes(2);
}