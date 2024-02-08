#include <bits/stdc++.h>

using namespace std;

int main(){
	long int sum = 0;
	long int prev_num = 1;
	long int fib_num = 2;

	sum += fib_num;

	while(fib_num <= 4000000) {
		long int temp = prev_num + fib_num;
		prev_num = fib_num;
		fib_num = temp;

		if(fib_num % 2 == 0) {
			sum += fib_num;
		}
		// cout << fib_num << endl;
	}
	cout << sum << endl;
}