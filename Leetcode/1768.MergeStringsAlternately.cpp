/*
https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

string mergeAlternately(string word1, string word2) {
	int s_n = word1.size(), t_n = word2.size();
    int n = max(s_n, t_n);

    string ss = "";
    for (int i = 0; i < n; ++i)
   	{
   		if (i < s_n) ss.push_back(word1[i]);
   		if (i < t_n) ss.push_back(word2[i]);
   	}

   	return ss;
}

int main() {
	string s, t;
	cin >> s >> t;

	cout << mergeAlternately(s, t) << "\n";
}


/*
abc
pqr

ab
pqrs
*/

/*
apbqcr

apbqrs
*/