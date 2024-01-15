#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int num = 600851475143;	


	for(long long int factor = 2; factor <= num; ++factor) {
		while(num % factor == 0 && factor != num) {
			num /= factor;
		}
	}
	cout << num << endl;
}