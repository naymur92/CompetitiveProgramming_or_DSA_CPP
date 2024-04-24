#include <bits/stdc++.h>
using namespace std;

int main(){
	// pair is used for maintain relationship
	pair<int, int> arr[3];
	arr[0] = {1, 2};
	arr[1] = {2, 3};
	arr[2] = {3, 4};
	for(int i = 0; i < 3; ++i) {
		cout << arr[i].first << " => " << arr[i].second << endl;
	}
	swap(arr[0], arr[2]);
	for(int i = 0; i < 3; ++i) {
		cout << arr[i].first << " => " << arr[i].second << endl;
	}
}