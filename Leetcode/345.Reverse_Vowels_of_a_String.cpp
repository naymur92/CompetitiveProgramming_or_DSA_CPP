/*
https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

bool checkVowels(char c) {
	return (c == 'A'
		|| c == 'a'
		|| c == 'E'
		|| c == 'e'
		|| c == 'I'
		|| c == 'i'
		|| c == 'O'
		|| c == 'o'
		|| c == 'U'
		|| c == 'u');
}

string reverseVowels(string s) {
	int i = 0, j = s.size() - 1;

	while (i < j) {
		while (!checkVowels(s[i]) and i < j) i++;
		while (!checkVowels(s[j]) and i < j) j--;

		if (i < j) swap(s[i], s[j]);

		i++, j--;
	}

	return s;
}

int main() {
	string s = "IceCreAm";

	cout << reverseVowels(s) << "\n";
}


/*
IceCreAm
*/

/*
AceCreIm
*/