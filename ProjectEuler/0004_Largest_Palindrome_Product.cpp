#include <bits/stdc++.h>

using namespace std;

bool test_palindrome(unsigned int num) {
	unsigned int rev_num = 0, temp = num;

	while(temp) {
		rev_num = rev_num * 10 + temp % 10;
		temp /= 10;
	}

	return num == rev_num;
}

int main(){
	unsigned i, j, pal_num = 0;

	for(i = 100; i <= 999; i++) {
		for(j = 100; j <= 999; j++) {
			unsigned int product = i * j;
			if(test_palindrome(product) && product > pal_num) {
				pal_num = i * j;
			}
		}
	}

	cout << pal_num << endl;
}