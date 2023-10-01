#include <bits/stdc++.h>

using namespace std;

bool check_prime(unsigned long num) {
	if(num == 1) {
		return false;
	}

	if(num == 2) {
		return true;
	}

	for(unsigned long i = 3; i <= num / 2; i += 2) {
		if(num % i == 0) {
			return false;
		}
	}

	return true;
}

int main(){
	unsigned long long sum = 2;
	unsigned int count = 0;
	for(unsigned long i = 3; i < 200000; i += 2) {
		if(check_prime(i)) {
			// sum += i;
			cout << i << " ";
			// count++;
		}
	}

	// cout << sum << endl;
	cout << count << endl;
}