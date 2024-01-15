#include <bits/stdc++.h>

using namespace std;

int count_divisiors(unsigned long num) {
	int count = 0;
	for(unsigned long i = 1; i * i <= num; ++i) {
		if(num % i == 0) {
			if(num / i == i) {
				count++;
			} else {
				count += 2;
			}
		}
	}

	return count;
}


int main(){
	unsigned long number = 0;
	unsigned int i = 1;

	while(true) {
		number += i;

		int divisiors = count_divisiors(number);

		if(divisiors > 1000) {
			cout << number << endl;
			break;
		}

		i++;

	}

}