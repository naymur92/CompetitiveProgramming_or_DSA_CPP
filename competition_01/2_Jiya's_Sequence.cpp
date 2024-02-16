#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n;
	cin >> t;

	while(t--) {
		cin >> n;
		long long int product = 1;
		for(int i = 0; i < n; i++) {
			int number;
			cin >> number;
			product *= number;
		}

		int ldn = product % 10; // ldn = least digit number
		if(ldn == 2 || ldn == 3 || ldn == 5) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}