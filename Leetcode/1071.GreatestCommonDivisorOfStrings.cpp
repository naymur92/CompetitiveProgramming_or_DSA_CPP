/*
https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;


bool checkString(string main, string part, int t) {
	string new_s = "";
	while (t--) new_s += part;

	return main == new_s;
}

string gcdOfStrings(string str1, string str2) {
	int s_n = str1.size(), t_n = str2.size();
	int n = min(s_n, t_n);

	string gcds = "";
	for (int i = n; i >= 1; --i)
	{
		if (s_n % i != 0 || t_n % i != 0) continue;

		gcds = str1.substr(0, i);
		
		// check if satisfy gcds both string
		if (checkString(str1, gcds, s_n / i) && checkString(str2, gcds, t_n / i))
			return gcds;
	}
	return "";
}

int main() {
	string s, t;
	cin >> s >> t;

	// gcdOfStrings(s, t);
	cout << gcdOfStrings(s, t) << "\n";
}


/*
ABCABC
ABC

ABABAB
ABAB
*/

/*
ABC

AB
*/