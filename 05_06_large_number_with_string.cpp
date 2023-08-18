#include <bits/stdc++.h>

using namespace std;

int main(){
	string number;

	cin >> number;

	// without subtract '0' it will show ASCII value of last_digit
	int last_digit = number[number.size() - 1];
	// int last_digit = number[number.size() - 1] - '0';

	// cout << last_digit << endl;
	number[number.size() - 1] = last_digit + 5;
	// number[number.size() - 1] = last_digit + 3 + '0';

	cout << number << endl;
}