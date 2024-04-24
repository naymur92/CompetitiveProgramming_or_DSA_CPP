#include <bits/stdc++.h>
using namespace std;

int main(){
	// input of pair
	int n;
	cin >> n;

	pair<int, int> arr[n];
	// arr[0] = {1, 2};
	// arr[1] = {2, 3};
	// arr[2] = {3, 4};
	for(int i = 0; i < n; ++i) {
		cin >> arr[i].first >> arr[i].second;
	}
	for(int i = 0; i < 3; ++i) {
		cout << arr[i].first << " " << arr[i].second << endl;
	}
}