/*
https://codeforces.com/problemset/problem/474/B
*/

#include <bits/stdc++.h>

using namespace std;

vector<long long> primes;

void sieve() {
	int N = 1e6 + 10;
	vector<int> primebools(N);

	for (int i = 2; i < N; ++i)
	{
		if (primebools[i]) continue;
		for (int j = 2 * i; j < N; j += i) primebools[j] = 1;
	}

	primes.push_back(2 * 2);
	for (long long i = 3; i < N; ++i)
	{
		if (primebools[i] == 0) primes.push_back(i * i);
	}
}

bool search(long long x) {

	long long low = 0, high = primes.size(), mid;
	
	while (high - low > 1) {
		mid = (high + low) / 2;

		if (primes[mid] < x) {
			low = mid + 1;
		} else {
			high = mid;
		}
	}

	if (primes[low] == x || primes[high] == x) return true;
	else return false;
}

int main(){
	sieve();
	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		long long x;
		cin >> x;
		cout << (search(x) ? "YES\n" : "NO\n");
	}
}


/*
3
4 5 6


*/

/*
YES
NO
NO

*/