#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, count = 0;
	cin >> n;	

	for(int i = 1; i <= n / 4 + 1; ++i) {
		int other_side = n - (2 * i);

		if(2 * i < other_side && other_side % 2 == 0){
			count++;
		}
	}	
	cout << count << endl;
		
}