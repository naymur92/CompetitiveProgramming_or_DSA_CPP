#include <bits/stdc++.h>

using namespace std;

// reverse string in iterative method
void reverse(string &c, int n) {
	int i = 0, j = n - 1;

	while (i < j) {
		swap(c[i], c[j]);
		i++;
		j--;
	}
}


int main() {
	string s = "Hello World!";
	cout << s << "\n";

	reverse(s, s.size());

	cout << s << "\n";
}