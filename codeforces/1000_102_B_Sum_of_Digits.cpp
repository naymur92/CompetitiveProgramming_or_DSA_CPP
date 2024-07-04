/*
https://codeforces.com/problemset/problem/102/B
*/

#include <bits/stdc++.h>

using namespace std;

unsigned long digitSum(unsigned long number) {
	unsigned long sum = 0;

	while (number) {
		sum += (number % 10);
		number /= 10;
	}
	return sum;
}

int main(){
	string num;
	cin >> num;

	unsigned long sum = 0;

	for (int i = 0; i < num.size(); ++i)
	{
		sum += (num[i] - '0');
	}

	int count = 1;

	while (sum > 9) {
		sum = digitSum(sum);
		count++;
	}

	cout << count;
}


/*
991
*/

/*
3
*/