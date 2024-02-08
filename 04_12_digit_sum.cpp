#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--) {
		int number;
		cin >> number;

		int digit_sum = 0;

		while(number > 0) {
			int last_digit = number % 10;
			digit_sum += last_digit;

			number = number / 10;
		}
		cout << digit_sum << endl;
	}
	
}