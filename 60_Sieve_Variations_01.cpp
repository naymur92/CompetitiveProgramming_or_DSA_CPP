#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> divisors[N];
vector<long long> sum(N, 1);

int main()
{	
	for (int i = 2; i < N; ++i) {
		for (int j = i; j < N; j += i) {
			divisors[j].push_back(i);
			sum[j] += i;
		}
	}

	for (int i = 1; i <= 50; ++i) {
		cout << "Num: " << i << "\n";

		cout << "Divisors: " << 1 << " ";
		for (int div: divisors[i]) {
			cout << div << " ";
		}
		cout << "\n";

		cout << "Sum: " << sum[i] << "\n\n";
	}
}

/*

*/

/*

*/