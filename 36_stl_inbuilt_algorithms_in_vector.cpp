#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v) {
	for(auto &item: v) cout << item << " ";
	cout << "\n";
}

int main(){
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	cout << *min_element(v.begin(), v.end()) << "\n";
	cout << *max_element(v.begin(), v.end()) << "\n";
	cout << *min_element(v.begin() + 3, v.end()) << "\n";
	cout << *max_element(v.begin(), v.end() - 2) << "\n";

	cout << accumulate(v.begin(), v.end(), 0) << "\n";
	cout << accumulate(v.begin() + 2, v.end(), 0) << "\n";

	cout << count(v.begin(), v.end(), 6) << "\n";
	cout << count(v.begin(), v.end() - 3, 6) << "\n";

	auto it = find(v.begin(), v.end(), 6);	// returns first index
	if (it != v.end()) cout << "Found at position " << (it - v.begin()) << "\n";
	else cout << "Not Found!\n";

	// reverse(v.begin(), v.end());
	reverse(v.begin() + 2, v.end());
	printVector(v);

	string s = "abcdefghijkl";
	// reverse(s.begin(), s.end());
	reverse(s.begin(), s.end() - 3);
	cout << s << "\n";
}

/*
6
2 3 1 6 7 6
*/