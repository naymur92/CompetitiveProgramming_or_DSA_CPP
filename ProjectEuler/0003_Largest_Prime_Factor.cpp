#include <bits/stdc++.h>

using namespace std;

bool check_prime(long long int num) {
	if(num == 1) {
		return false;
	} else if(num == 2) {
		return true;
	} else {
		for(long long int i = 2; i < num / 2; ++i) {
			if(num % i == 0) {
				return false;
			}
		}
	}
}

int main(){
	long long int num = 600851475143;	

	long int prime_factor = 0;

	// for(long long int i = 2; i < num / 2; ++i) {
	// 	if(num % i == 0 && check_prime(i)) {
	// 		prime_factor = i;
	// 	}
	// }
	cout << prime_factor << endl;
}