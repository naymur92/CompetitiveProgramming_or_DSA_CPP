#include <bits/stdc++.h>

using namespace std;

int main(){
	const unsigned int maxPrime = 2000000;
	std::vector<unsigned int> primes;
	primes.push_back(2);

	for(unsigned int i = 3; i <= maxPrime; i += 2) {
		bool isPrime = true;
		for (auto p : primes) {
			if(p * p > i) break;

			if(i % p == 0) {
				isPrime = false;
				break;
			}
		}

		if(isPrime) {
			primes.push_back(i);
		}
	}

	std::map<unsigned int, unsigned long long> sums;
	unsigned long long sum = 0;
	for(auto p : primes) {
		sum += p;
		sums[p] = sum;
	}

	unsigned int tests;
	cin >> tests;
	while (tests--)
	{
		unsigned int x;
		cin >> x;

		// find the closest prime number which is bigger than the input
		auto i = sums.upper_bound(x);
		// go back to the closest prime number which is smaller than the input
		i--;

		// show the sum associated to that prime number
		cout << i->second << endl;
	}

	
}