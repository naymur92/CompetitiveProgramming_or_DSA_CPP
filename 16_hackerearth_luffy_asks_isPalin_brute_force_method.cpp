/*
Luffy with his crew is on the way to Dressrosa, where he will be fighting one of the warlords of the sea Doflamingo. But now
he is getting bored and wants do a fun activity. He is very much obessed with palindromes. Given a string S of lower case
English alphabet of length N and two integers L and R he wants to know whether all the letters of the substring from index L
to R (L and R included) can be rearranged to form a palindrome or not. He wants to know this for Q values of L and R and
needs your help in finding the answer.
Palindrome is a string of characters which when reverserd reads same as the original String.

Constraints:
1 <= t <= 10
1 <= N, Q <= 100000
1 <= L <= R <= N
'a' <= S[i] <= 'z' for 1 <= i <= N

Input:
* First line of input contains an integer T denoting number of test cases.
* First line of each test case contains 2 space separated integers N and Q, the length of the string and number of queries
respectively
* Next line contains the string S
* Each of the Next Q lines contains 2 space separated integers L and R

Output:
For each query of each test case print "YES" without quotes if letters of the substring from L to R can be rearranged to form a
palindrome otherwise output "NO" in new line

Input Sample:
2
5 5
abcec
1 2
2 5
3 5
1 5
1 4
5 5
aabbc
1 2
2 5
3 5
1 5
1 4
5 5

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, q;
		cin >> n >> q;

		string s;
		cin >> s;

		while(q--)
		{
			int l, r;
			cin >> l >> r;

			int hash[26];
			for (int i = 0; i < 26; ++i)
			{
				hash[i] = 0;
			}

			l--; r--;
			for (int i = l; i <= r; ++i)
			{
				hash[s[i] - 'a']++;
			}

			int oddCount = 0;
			for (int i = 0; i < 26; ++i)
			{
				if(hash[i] % 2 != 0) oddCount++;
			}

			if (oddCount > 1)
			{
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		}
	}
	

	// O(T * Q * (26 + N + 26)) = O(T * Q * N) = 10 * 10^5 * 10^5
}