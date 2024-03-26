#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		long long dec_number = 0;
		long long power2 = 1;
		for(int i = n - 1; i >= 0; i--) {			
			int number = s[i] - '0';
			dec_number += number * power2;
			power2 *= 2;
		}
		cout << dec_number << endl;
	}
}