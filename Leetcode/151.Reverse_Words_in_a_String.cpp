/*
https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s) {
	string new_s = "";
	int n = s.size();

	int i = 0, j = 0;
	vector<string> words;
	while (i < n) {
		while (i < n and s[i] == ' ') i++;
		j = 0;
		while (i + j < n and s[i + j] != ' ') j++;
		if (j != 0) words.push_back(s.substr(i, j));
		i += j + 1;
	}

	for (int i = words.size() - 1; i >= 0; --i)
	{
		if (new_s == "") new_s = words[i];
		else new_s += " " + words[i];
	}

	return new_s;
}

int main() {
	string s = "  hello world  ";

	cout << reverseWords(s);
}


/*
"the sky is blue"

"  hello world  "
*/

/*
blue is sky the

world hello
*/