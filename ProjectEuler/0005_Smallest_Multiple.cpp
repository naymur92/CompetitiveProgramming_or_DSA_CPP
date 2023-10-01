#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int lcm = 1;

	while(true) {
		bool lcm_found = true;
		for(int i = 1; i <= 20; i++) {
			if(lcm % i != 0) {
				lcm_found = false;
			}
		}
		if(lcm_found) {
			break;
		} else{
			lcm++;
		}
	}

	cout << lcm << endl;
}