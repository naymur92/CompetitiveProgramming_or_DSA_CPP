#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n;
	cin >> m >> n;

	int a[m][n];

	// input
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}


	// output
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}