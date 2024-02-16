#include <bits/stdc++.h>

using namespace std;

int main(){
	int sum_num = 0;
	long long int sum_squares = 0;

	for(int i  = 1; i <= 100; ++i) {
		sum_num += i;
		sum_squares += i * i;
	}

	long long sum_num_squares = sum_num * sum_num;

	cout << sum_num_squares - sum_squares << endl;
}