#include <bits/stdc++.h>

using namespace std;

bool check_pythagorean(int a, int b, int c) {
	if(a * a + b * b == c * c) {
		return true;
	}
	return false;
}

int main(){
	long long product = 1;
	int a = 1, b = 2, c = 3;

	for(int a = 1; a + b + c <= 1000; ++a) {
		for(int b = a + 1; a + b + c <= 1000; ++b) {
			for(int c = b + 1; a + b + c <= 1000; ++c) {
				if(a + b + c == 1000 && check_pythagorean(a, b, c)) {
					// cout << a << " " << b << " " << c;
					product = a * b * c;
					cout << product << endl;
					// return 0;
				}
			}
		}
	}

}