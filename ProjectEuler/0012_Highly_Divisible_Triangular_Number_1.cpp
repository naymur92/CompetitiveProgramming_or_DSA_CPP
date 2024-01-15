#include <bits/stdc++.h>

using namespace std;

int count_divisiors(unsigned long long num) {
	int count_div = 1;
	for(unsigned long i = 2; num > 1; ++i) {		
		int count = 0;
		while(num % i == 0) {
			num /= i;
			count++;
		}
		count_div *= (count + 1);
	}

	return count_div;
}

int main(){
	unsigned long long number = 0;
	unsigned long i = 1;

	while(true) {
		number += i;

		int divisiors = count_divisiors(number);

		if(divisiors > 1000) {
			cout << number << endl;
			break;
		}

		i++;

	}

	// more than 1000 divisors = 842161320
	// count_divisiors(842161320);

}