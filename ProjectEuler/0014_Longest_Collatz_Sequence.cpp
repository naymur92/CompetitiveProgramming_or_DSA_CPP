#include <bits/stdc++.h>

using namespace std;

unsigned long generate_collatz(unsigned long num) {
	unsigned long count = 0;
	while(true) {
		count++;

		if(num == 1) {
			break;
		}

		if(num % 2 == 0) {
			num /= 2;
		} else {
			num = 3 * num + 1;
		}
	}
	return count;
}

int main(){
	unsigned long max_count = 0;
	unsigned long starting_number;
	for(unsigned long i = 1; i < 1000000; ++i) {
		unsigned long collatz_count = generate_collatz(i);
		if(collatz_count > max_count) {
			max_count = collatz_count;
			starting_number = i;
		}
	}

	cout << max_count << endl;
	cout << starting_number << endl;
}

