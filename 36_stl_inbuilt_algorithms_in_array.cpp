#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int a[n];	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	cout << *min_element(a, a + n) << "\n";
	cout << *max_element(a, a + n) << "\n";
	cout << *min_element(a + 3, a + n) << "\n";
	cout << *max_element(a, a + n - 2) << "\n";

	cout << accumulate(a, a + n, 0) << "\n";
	cout << accumulate(a + 2, a + n, 0) << "\n";

	cout << count(a, a + n, 6) << "\n";
	cout << count(a, a + n - 3, 6) << "\n";

	auto ptr = find(a, a + n, 2);	// returns first index
	if (ptr != a + n) cout << "Found at position " << (ptr - a) << "\n";
	else cout << "Not Found!\n";

	// reverse(a, a + n);
	reverse(a + 2, a + n);
	for (auto &item: a) cout << item << " ";
	cout << "\n";
}

/*
6
2 3 1 6 7 6
*/