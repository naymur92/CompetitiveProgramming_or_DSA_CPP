#include <bits/stdc++.h>

using namespace std;

bool check_prime(long int num) {
	if(num == 1) {
		return false;
	}

	if(num == 2) {
		return true;
	}

	for(long int i = 3; i <= num / 2; i += 2) {
		if(num % i == 0) {
			return false;
		}
	}

	return true;
}

int main(){
	int n = 0;
	long int i = 2;
	while(true) {
		if(check_prime(i)) {
			n++;
		}

		if(n == 10001) {
			break;
		}

		i++;
	}

	cout << i << endl;
}