#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;

	cin >> a >> b >> c;

	int cth_num;

	for(int i = 1; c > 0; ++i) {
		if(i % a == 0 || i % b == 0) {
			if(c == 1) {
				cth_num = i;
			}

			c--;
		}
		
	}

	int step;
	if(cth_num % a == 0 && cth_num % b == 0) {
		for(int i = 1; i <= a * b; ++i) {
			if(i % a == 0 && i % b == 0) {
				step = i;
				break;
			}
		}
	} else if(cth_num % a == 0) {
		step = a;
	} else if(cth_num % b == 0) {
		step = b;
	}

	for(int i = cth_num; i >= 0; i = i - step) {
		cout << i << ' ';
	}
}